FROM --platform=linux/amd64 ubuntu:20.04 as builder

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y bison flex build-essential libffi-dev cmake

ADD . /never
WORKDIR /never/build
RUN cmake ..
RUN make -j8

RUN mkdir -p /deps
RUN ldd /never/build/never | tr -s '[:blank:]' '\n' | grep '^/' | xargs -I % sh -c 'cp % /deps;'

FROM ubuntu:20.04 as package

COPY --from=builder /deps /deps
COPY --from=builder /never/build/never /never/build/never
ENV LD_LIBRARY_PATH=/deps

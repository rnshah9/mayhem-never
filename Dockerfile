FROM --platform=linux/amd64 ubuntu:20.04

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y bison flex build-essential libffi-dev cmake

ADD . /never
WORKDIR /never/build
RUN cmake ..
RUN make -j8

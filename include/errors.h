/** 
 * Copyright 2020 Slawomir Maludzinski
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __ERRORS_H__
#define __ERRORS_H__

#define TYPECHECK_ERR_UNKNOWN           0x0
#define TYPECHECK_ERR_UNKNOWN_EXCEPTION 0x1
#define TYPECHECK_ERR_FOUND_ENUMERATOR  0x2
#define TYPECHECK_ERR_CANNOT_USE_MODULE_IN_THIS_CONTEXT 0x3
#define TYPECHECK_ERR_EXPR_IS_NOT_ENUM_NAME 0x4
#define TYPECHECK_ERR_ARRAYS_ARE_DIFFERENT 0x5
#define TYPECHECK_ERR_SLICES_ARE_DIFFERENT 0x6
#define TYPECHECK_ERR_FUNCTIONS_ARE_DIFFERENT 0x7
#define TYPECHECK_ERR_TYPES_ON_COND_EXPR_ARE_DIFFERENT 0x8
#define TYPECHECK_ERR_FUNCTION_ALREADY_DEFINED 0x9


#endif /* __ERRORS_H__ */

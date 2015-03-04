/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2015 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Olivier Garcia <olivier@catchy.io>                          |
   |          Patrick Allaert <patrick@catchy.io>                         |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_ERROR_CB_H
#define PHP_ERROR_CB_H

#define PHP_ERROR_CB_FUNC_ARGS int type, const char *error_filename, const uint error_lineno, const char *format, va_list args
#define PHP_ERROR_CB_FUNC_ARGS_PASSTHRU type, error_filename, error_lineno, format, args
#define PHP_ERROR_CB_HOOK_ARGS PHP_ERROR_CB_FUNC_ARGS, const char *error_type_str
#define PHP_ERROR_CB_HOOK_ARGS_PASSTHRU PHP_ERROR_CB_FUNC_ARGS_PASSTHRU, error_type_str

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */

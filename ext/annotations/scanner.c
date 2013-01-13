/* Generated by re2c 0.13.5 on Sat Jan 12 22:26:44 2013 */
// 1 "scanner.re"

/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"

#include "scanner.h"

#define JJCTYPE unsigned char
#define JJCURSOR (s->start)
#define JJLIMIT (s->end)
#define JJMARKER q

int phannot_get_token(phannot_scanner_state *s, phannot_scanner_token *token) {

	char next, *q = JJCURSOR, *start = JJCURSOR;
	int status = PHANNOT_SCANNER_RETCODE_IMPOSSIBLE;

	while (PHANNOT_SCANNER_RETCODE_IMPOSSIBLE == status) {

		if (s->mode == PHANNOT_MODE_RAW) {

			if (*JJCURSOR == '\n') {
				s->active_line++;
			}

			next = *(JJCURSOR+1);

			if (*JJCURSOR == '\0' || *JJCURSOR == '@') {
				if ((next >= 'A' && next <= 'Z') || (next >= 'a' && next <= 'z')) {
					s->mode = PHANNOT_MODE_ANNOTATION;
					continue;
				}
			}

			++JJCURSOR;
			token->opcode = PHANNOT_T_IGNORE;
			return 0;

		} else {

		
// 66 "scanner.c"
		{
			JJCTYPE jjch;
			unsigned int jjaccept = 0;

			jjch = *JJCURSOR;
			switch (jjch) {
			case 0x00:	goto jj36;
			case '\t':
			case '\r':
			case ' ':	goto jj32;
			case '\n':	goto jj34;
			case '"':	goto jj8;
			case '\'':	goto jj10;
			case '(':	goto jj12;
			case ')':	goto jj14;
			case ',':	goto jj30;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto jj2;
			case ':':	goto jj28;
			case '=':	goto jj26;
			case '@':	goto jj24;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj11;
			case 'F':
			case 'f':	goto jj6;
			case 'N':
			case 'n':	goto jj4;
			case 'T':
			case 't':	goto jj7;
			case '[':	goto jj20;
			case ']':	goto jj22;
			case '{':	goto jj16;
			case '}':	goto jj18;
			default:	goto jj38;
			}
jj2:
			jjaccept = 0;
			jjch = *(JJMARKER = ++JJCURSOR);
			goto jj67;
jj3:
// 67 "scanner.re"
			{
			token->opcode = PHANNOT_T_INTEGER;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
// 167 "scanner.c"
jj4:
			++JJCURSOR;
			switch ((jjch = *JJCURSOR)) {
			case 'U':
			case 'u':	goto jj61;
			default:	goto jj42;
			}
jj5:
// 109 "scanner.re"
			{
			token->opcode = PHANNOT_T_IDENTIFIER;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
// 184 "scanner.c"
jj6:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'A':
			case 'a':	goto jj56;
			default:	goto jj42;
			}
jj7:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'R':
			case 'r':	goto jj52;
			default:	goto jj42;
			}
jj8:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch >= 0x01) goto jj50;
jj9:
// 183 "scanner.re"
			{
			status = PHANNOT_SCANNER_RETCODE_ERR;
			break;
		}
// 209 "scanner.c"
jj10:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch <= 0x00) goto jj9;
			goto jj44;
jj11:
			jjch = *++JJCURSOR;
			goto jj42;
jj12:
			++JJCURSOR;
// 117 "scanner.re"
			{
			token->opcode = PHANNOT_T_PARENTHESES_OPEN;
			return 0;
		}
// 225 "scanner.c"
jj14:
			++JJCURSOR;
// 122 "scanner.re"
			{
			token->opcode = PHANNOT_T_PARENTHESES_CLOSE;
			return 0;
		}
// 233 "scanner.c"
jj16:
			++JJCURSOR;
// 127 "scanner.re"
			{
			token->opcode = PHANNOT_T_BRACKET_OPEN;
			return 0;
		}
// 241 "scanner.c"
jj18:
			++JJCURSOR;
// 132 "scanner.re"
			{
			token->opcode = PHANNOT_T_BRACKET_CLOSE;
			return 0;
		}
// 249 "scanner.c"
jj20:
			++JJCURSOR;
// 137 "scanner.re"
			{
			token->opcode = PHANNOT_T_SBRACKET_OPEN;
			return 0;
		}
// 257 "scanner.c"
jj22:
			++JJCURSOR;
// 142 "scanner.re"
			{
			token->opcode = PHANNOT_T_SBRACKET_CLOSE;
			return 0;
		}
// 265 "scanner.c"
jj24:
			++JJCURSOR;
// 147 "scanner.re"
			{
			token->opcode = PHANNOT_T_AT;
			return 0;
		}
// 273 "scanner.c"
jj26:
			++JJCURSOR;
// 152 "scanner.re"
			{
			token->opcode = PHANNOT_T_EQUALS;
			return 0;
		}
// 281 "scanner.c"
jj28:
			++JJCURSOR;
// 157 "scanner.re"
			{
			token->opcode = PHANNOT_T_COLON;
			return 0;
		}
// 289 "scanner.c"
jj30:
			++JJCURSOR;
// 162 "scanner.re"
			{
			token->opcode = PHANNOT_T_COMMA;
			return 0;
		}
// 297 "scanner.c"
jj32:
			++JJCURSOR;
			jjch = *JJCURSOR;
			goto jj40;
jj33:
// 167 "scanner.re"
			{
			token->opcode = PHANNOT_T_IGNORE;
			return 0;
		}
// 308 "scanner.c"
jj34:
			++JJCURSOR;
// 172 "scanner.re"
			{
			s->active_line++;
			token->opcode = PHANNOT_T_IGNORE;
			return 0;
		}
// 317 "scanner.c"
jj36:
			++JJCURSOR;
// 178 "scanner.re"
			{
			status = PHANNOT_SCANNER_RETCODE_EOF;
			break;
		}
// 325 "scanner.c"
jj38:
			jjch = *++JJCURSOR;
			goto jj9;
jj39:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj40:
			switch (jjch) {
			case '\t':
			case '\r':
			case ' ':	goto jj39;
			default:	goto jj33;
			}
jj41:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj42:
			switch (jjch) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj41;
			default:	goto jj5;
			}
jj43:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj44:
			switch (jjch) {
			case 0x00:	goto jj45;
			case '\'':	goto jj47;
			case '\\':	goto jj46;
			default:	goto jj43;
			}
jj45:
			JJCURSOR = JJMARKER;
			switch (jjaccept) {
			case 0: 	goto jj3;
			case 1: 	goto jj9;
			}
jj46:
			++JJCURSOR;
			jjch = *JJCURSOR;
			switch (jjch) {
			case '\n':	goto jj45;
			default:	goto jj43;
			}
jj47:
			++JJCURSOR;
// 100 "scanner.re"
			{
			token->opcode = PHANNOT_T_STRING;
			token->value = estrndup(q, JJCURSOR - q - 1);
			token->len = JJCURSOR - q - 1;
			q = JJCURSOR;
			return 0;
		}
// 443 "scanner.c"
jj49:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj50:
			switch (jjch) {
			case 0x00:	goto jj45;
			case '"':	goto jj47;
			case '\\':	goto jj51;
			default:	goto jj49;
			}
jj51:
			++JJCURSOR;
			jjch = *JJCURSOR;
			switch (jjch) {
			case '\n':	goto jj45;
			default:	goto jj49;
			}
jj52:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'U':
			case 'u':	goto jj53;
			default:	goto jj42;
			}
jj53:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'E':
			case 'e':	goto jj54;
			default:	goto jj42;
			}
jj54:
			++JJCURSOR;
			switch ((jjch = *JJCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj41;
			default:	goto jj55;
			}
jj55:
// 94 "scanner.re"
			{
			token->opcode = PHANNOT_T_TRUE;
			return 0;
		}
// 550 "scanner.c"
jj56:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'L':
			case 'l':	goto jj57;
			default:	goto jj42;
			}
jj57:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'S':
			case 's':	goto jj58;
			default:	goto jj42;
			}
jj58:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'E':
			case 'e':	goto jj59;
			default:	goto jj42;
			}
jj59:
			++JJCURSOR;
			switch ((jjch = *JJCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj41;
			default:	goto jj60;
			}
jj60:
// 89 "scanner.re"
			{
			token->opcode = PHANNOT_T_FALSE;
			return 0;
		}
// 647 "scanner.c"
jj61:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'L':
			case 'l':	goto jj62;
			default:	goto jj42;
			}
jj62:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case 'L':
			case 'l':	goto jj63;
			default:	goto jj42;
			}
jj63:
			++JJCURSOR;
			switch ((jjch = *JJCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj41;
			default:	goto jj64;
			}
jj64:
// 84 "scanner.re"
			{
			token->opcode = PHANNOT_T_NULL;
			return 0;
		}
// 737 "scanner.c"
jj65:
			jjch = *++JJCURSOR;
			switch (jjch) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto jj68;
			default:	goto jj45;
			}
jj66:
			jjaccept = 0;
			JJMARKER = ++JJCURSOR;
			jjch = *JJCURSOR;
jj67:
			switch (jjch) {
			case '.':	goto jj65;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto jj66;
			default:	goto jj3;
			}
jj68:
			++JJCURSOR;
			jjch = *JJCURSOR;
			switch (jjch) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto jj68;
			default:	goto jj70;
			}
jj70:
// 76 "scanner.re"
			{
			token->opcode = PHANNOT_T_DOUBLE;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
// 797 "scanner.c"
		}
// 188 "scanner.re"


		}
	}

	return status;
}

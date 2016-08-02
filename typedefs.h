#ifndef TYPEDEFS_H
#define TYPEDEFS_H

/*
 * Boolean definitions
 */

#ifndef bool
#define bool int
#endif

#if !defined(false) || (false != 0)
#define false	0
#endif

#if !defined(true) || (true != 0)
#define true	1
#endif

#if !defined(FALSE) || (FALSE != false)
#define FALSE	false
#endif

#if !defined(TRUE) || (TRUE != true)
#define TRUE	true
#endif

/*
 * Error flags
 */

#if !defined(ERR) || (ERR != -1)
#define ERR		-1
#endif

#if !defined(OK) || (OK != 0)
#define OK		0
#endif

#endif	/* #ifndef TYPEDEFS_H */

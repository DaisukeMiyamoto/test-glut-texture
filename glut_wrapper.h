#ifndef __GLUT_WRAPPER_H__
#define __GLUT_WRAPPER_H__

#define KEY_ESC 27

// setup functions
void glut_wrapper_init(char *progname);
void glut_wrapper_set_animation(void (*anmfunc)(void));

#endif

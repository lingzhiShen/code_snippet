#if defined(linux) && defined(i386) && defined(__GNUC__)

 #define HAVE_32_GCC_LINUX 1

#endif



#if defined(WIN32) && defined(i386)

 #define HAVE_WIN32 1

 #include <windows.h>

#endif



void delete(char str[])

{

 #ifdef HAVE_32_GCC_LINUX

  unlink(str);

  printf("删除成功!\n",str);



 #endif



 #ifdef HAVE_WIN32

  DeleteFile(str);

  printf("删除成功!\n",str);



 #endif

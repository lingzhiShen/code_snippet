#include <stdio.h>

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
if(unlink(str) == 0)
    printf("É¾³ý³É¹¦!\t%s\n", str);
else
    printf("É¾³ýÊ§°Ü!\t%s\n", str);


#endif



#ifdef HAVE_WIN32

if(DeleteFile(str))
    printf("É¾³ý³É¹¦!\t%s\n",str);
else
    printf("É¾³ýÊ§°Ü!\t%s\n",str);



#endif
}


int main()
{
    delete("Hello.txt");

    return 0;
}

#include "main.h"

#ifdef TEST
  #define LOOP 
#else
  #define LOOP while(1)
  #include "stm32f4xx.h"
  int main ( void )              
  {
#ifdef TARGET
    return AppMain();
#else
	return 0;
#endif
  }
#endif // TEST


int AppMain( void )
{

    LOOP
    {

    }
    return 0;
}

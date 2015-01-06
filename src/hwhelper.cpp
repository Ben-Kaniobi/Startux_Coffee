#include <iostream>
#include <fstream>
using namespace std;



void Led_Init(void)
{
    ofstream fd;

    /* Export GPIO LED 1 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "61";
        fd.close();
    }

    /* Export GPIO LED 2 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "44";
        fd.close();
    }

    /* Export GPIO LED 3 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "68";
        fd.close();
    }

    /* Export GPIO LED 4 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "67";
        fd.close();
    }

    /* Set LED1 as output */
    fd.open("/sys/class/gpio/gpio61/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }

    /* Set LED1 as output */
    fd.open("/sys/class/gpio/gpio44/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }

    /* Set LED1 as output */
    fd.open("/sys/class/gpio/gpio68/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }

    /* Set LED1 as output */
    fd.open("/sys/class/gpio/gpio67/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }
}

/* Set LED1 to 1 */
void Set_LED1(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio61/value");
    if(fd.is_open())
    {
        fd << "0";
        fd.close();
    }
}

/* Set LED1 to 0 */
void Clear_LED1(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio61/value");
    if(fd.is_open())
    {
        fd << "1";
        fd.close();
    }
}

/* Set LED2 to 1 */
void Set_LED2(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio44/value");
    if(fd.is_open())
    {
        fd << "0";
        fd.close();
    }
}

/* Set LED2 to 0 */
void Clear_LED2(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio44/value");
    if(fd.is_open())
    {
        fd << "1";
        fd.close();
    }
}

/* Set LED3 to 1 */
void Set_LED3(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio68/value");
    if(fd.is_open())
    {
        fd << "0";
        fd.close();
    }
}

/* Set LED3 to 0 */
void Clear_LED3(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio68/value");
    if(fd.is_open())
    {
        fd << "1";
        fd.close();
    }
}

/* Set LED4 to 1 */
void Set_LED4(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio67/value");
    if(fd.is_open())
    {
        fd << "0";
        fd.close();
    }
}

/* Set LED4 to 0 */
void Clear_LED4(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/gpio67/value");
    if(fd.is_open())
    {
        fd << "1";
        fd.close();
    }
}

/* Unexport LED1 - LED4 */
void Unexport_LED(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "61";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "44";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "68";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "67";
        fd.close();
    }
}

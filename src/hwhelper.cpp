#include <iostream>
#include <fstream>
using namespace std;


/* Init LEDs 1-4 */
void LED_Init(void)
{
    ofstream fd;

    /* Export GPIO LED1 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "61";
        fd.close();
    }

    /* Export GPIO LED2 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "44";
        fd.close();
    }

    /* Export GPIO LED3 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "68";
        fd.close();
    }

    /* Export GPIO LED4 */
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

    /* Set LED2 as output */
    fd.open("/sys/class/gpio/gpio44/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }

    /* Set LED3 as output */
    fd.open("/sys/class/gpio/gpio68/direction");
    if(fd.is_open())
    {
        fd << "out";
        fd.close();
    }

    /* Set LED4 as output */
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

/* Init BTNs 1-4 */
void BTN_Init(void)
{
    ofstream fd;

    /* Export GPIO BTN1 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "49";
        fd.close();
    }

    /* Export GPIO BTN2 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "112";
        fd.close();
    }

    /* Export GPIO BTN3 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "51";
        fd.close();
    }

    /* Export GPIO BTN4 */
    fd.open("/sys/class/gpio/export");
    if(fd.is_open())
    {
        fd << "7";
        fd.close();
    }

    /* Set BTN1 as output */
    fd.open("/sys/class/gpio/gpio49/direction");
    if(fd.is_open())
    {
        fd << "in";
        fd.close();
    }

    /* Set BTN2 as output */
    fd.open("/sys/class/gpio/gpio112/direction");
    if(fd.is_open())
    {
        fd << "in";
        fd.close();
    }

    /* Set BTN3 as output */
    fd.open("/sys/class/gpio/gpio51/direction");
    if(fd.is_open())
    {
        fd << "in";
        fd.close();
    }

    /* Set BTN4 as output */
    fd.open("/sys/class/gpio/gpio7/direction");
    if(fd.is_open())
    {
        fd << "in";
        fd.close();
    }
}

/* Get BTN1 */
bool Get_BTN1(void)
{
    string line;
    ifstream fd ("/sys/class/gpio/gpio49/value");
    if (fd.is_open())
    {
        getline(fd,line);
        fd.close();
    }

    if(line == "0")
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Get BTN2 */
bool Get_BTN2(void)
{
    string line;
    ifstream fd ("/sys/class/gpio/gpio112/value");
    if (fd.is_open())
    {
        getline(fd,line);
        fd.close();
    }

    if(line == "0")
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Get BTN3 */
bool Get_BTN3(void)
{
    string line;
    ifstream fd ("/sys/class/gpio/gpio51/value");
    if (fd.is_open())
    {
        getline(fd,line);
        fd.close();
    }

    if(line == "0")
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Get BTN4 */
bool Get_BTN4(void)
{
    string line;
    ifstream fd ("/sys/class/gpio/gpio7/value");
    if (fd.is_open())
    {
        getline(fd,line);
        fd.close();
    }

    if(line == "0")
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Unexport BTN1 - BTN4 */
void Unexport_BTN(void)
{
    ofstream fd;
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "49";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "112";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "51";
        fd.close();
    }
    fd.open("/sys/class/gpio/unexport");
    if(fd.is_open())
    {
        fd << "7";
        fd.close();
    }
}

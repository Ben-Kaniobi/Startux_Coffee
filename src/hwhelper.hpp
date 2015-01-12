#ifndef HWHELPER_HPP
#define HWHELPER_HPP

extern void LED_Init(void);
extern void Set_LED1(void);
extern void Set_LED2(void);
extern void Set_LED3(void);
extern void Set_LED4(void);
extern void Clear_LED1(void);
extern void Clear_LED2(void);
extern void Clear_LED3(void);
extern void Clear_LED4(void);
extern void Unexport_LED(void);

extern void BTN_Init(void);
extern bool Get_BTN1(void);
extern bool Get_BTN2(void);
extern bool Get_BTN3(void);
extern bool Get_BTN4(void);
extern void Unexport_BTN(void);



#endif // HWHELPER_HPP

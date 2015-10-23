/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/main.h 
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    13-April-2012
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif 

#define FULL_ASSERT 1	 
#define USE_FULL_ASSERT 1
	 
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"

/* Exported typedef -----------------------------------------------------------*/
// #define countof(a)   (sizeof(a) / sizeof(*(a)))
// typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;
     
// --------------------------------------------------------------- KONSTANTEN -
#define ANZ 100
// --------------------------------------------------------------- PROTOTYPEN -
void init_prim_arr(void);
void calc_prim_arr(void);
int calc_sum_prim(int, int);

void print_ergebnis_TFT(void);

// -------------------------------------------------------------- DEKLARATION -
extern char prim_arr[ANZ];
extern int prim_anz;
extern int start;
extern int ende;
     
     


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

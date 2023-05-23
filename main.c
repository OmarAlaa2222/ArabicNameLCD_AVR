/*
 * main.c
 *
 *  Created on: May 15, 2023
 *      Author: Legion
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "util/delay.h"

#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "LCD_Private.h"
#include "LCD_Config.h"

int main (void){


	DIO_voidSetPortDirection(LCD_DATA_PORT,255);
	DIO_voidSetPortDirection(LCD_CONTROL_PORT,255);
	DIO_voidSetPortValue(LCD_DATA_PORT,0);
	DIO_voidSetPortValue(LCD_CONTROL_PORT,0);

	LCD_voidInit();


u8 i;




	while (1){

		for (i=15;i>4;i--){
		u8 arr[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00011111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr,0,0,i);


			u8 arr1[8]={0b00000000,
					    0b00000000,
					    0b00000111,
						0b00000101,
						0b00011111,
					    0b00000000,
					    0b00000000,
					    0b00000000};

			LCD_voidWriteSpecialCharacter(arr1,1,0,(i-1));


			u8 arr2[8]={0b00000000,
					    0b00000000,
					    0b00000000,
						0b00000000,
						0b00000011,
					    0b00000100,
					    0b00001000,
					    0b00010000};

			LCD_voidWriteSpecialCharacter(arr2,2,0,(i-2));

			u8 arr3[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00011111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr3,3,0,(i-3));

			u8 arr4[8]={0b00010001,
					    0b00001001,
					    0b00000101,
					    0b00000011,
					    0b00011111,
					    0b00000000,
					    0b00000000,
					    0b00000000};

			LCD_voidWriteSpecialCharacter(arr4,4,0,(i-4));

			u8 arr5[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00000111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr5,5,0,(i-5));


			_delay_ms(200);
			LCD_voidClearDisplay();


		}



		for (i=6;i<15;i++){
		u8 arr[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00011111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr,0,0,i);


			u8 arr1[8]={0b00000000,
					    0b00000000,
					    0b00000111,
						0b00000101,
						0b00011111,
					    0b00000000,
					    0b00000000,
					    0b00000000};

			LCD_voidWriteSpecialCharacter(arr1,1,0,(i-1));


			u8 arr2[8]={0b00000000,
					    0b00000000,
					    0b00000000,
						0b00000000,
						0b00000011,
					    0b00000100,
					    0b00001000,
					    0b00010000};

			LCD_voidWriteSpecialCharacter(arr2,2,0,(i-2));

			u8 arr3[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00011111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr3,3,0,(i-3));

			u8 arr4[8]={0b00010001,
					    0b00001001,
					    0b00000101,
					    0b00000011,
					    0b00011111,
					    0b00000000,
					    0b00000000,
					    0b00000000};

			LCD_voidWriteSpecialCharacter(arr4,4,0,(i-4));

			u8 arr5[8]={0b00000000,
					   0b00000000,
					   0b00000001,
					   0b00000010,
					   0b00000111,
					   0b00000000,
					   0b00000000,
					   0b00000000};

			LCD_voidWriteSpecialCharacter(arr5,5,0,(i-5));


			_delay_ms(200);
			LCD_voidClearDisplay();


		}


/*
			for (i=0;i<12;i++){
				LCD_voidGoToPos(0,i);
				LCD_voidSendString("OMAR");
				_delay_ms(200);
				LCD_voidClearDisplay();

			}

			for (i=12;i>0;i--){
			LCD_voidGoToPos(0,i);
			LCD_voidSendString("OMAR");
			_delay_ms(200);
			LCD_voidClearDisplay();

						}*/ //LOOPING NAME IN ONE ROW



	}

return 0;
}


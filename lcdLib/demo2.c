/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  //drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  // for (u_char c = 0; c < 20; c++) //Test1
  //  drawPixel(c, c, COLOR_WHITE);

  // for (u_char i = 0; i < 20; i++)
  //  drawPixel((screenWidth / 2) + i, i, COLOR_WHITE);

  //for (u_char i = 0; i < 20; i++)
  //  drawPixel((screenWidth / 2) + i,(screenHeight / 2) + i, COLOR_WHITE);

  for (signed char i = -20; i < 20; i++)
    drawPixel((screenWidth / 2) + i,(screenHeight / 2) + i, COLOR_WHITE);

}

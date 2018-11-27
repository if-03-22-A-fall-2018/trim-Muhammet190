/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include  <string.h>


 int remove_blanks ( const char* source)
   {
     int count = 0;
     while (source[count] == ' ') {
       count++;
     }
     return count;
   }

  void trim	(	const char * source,char * trimmed_string)
  {
    int count = remove_blanks(source);

    for (int i = 0; i < STRLEN; i++) {
      if (!((source[count] == ' ' && source[count+1] == ' ') || (source[count] == ' ' && source[count+1] == '\0'))) {
        trimmed_string[i] = source[count];
        count++;
      }
   }
 }

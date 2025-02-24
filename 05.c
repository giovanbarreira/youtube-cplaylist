/***********************
 *                     *
 *  Code Craft Academy *
 *        2025         *
 *                     *
 ***********************/

 #include <stdio.h>

 int main() {
     FILE *file = fopen("dec_class_rep.txt", "a");
 
     fprintf(file, "subject,students,date\n");
     fprintf(file, "French,220,202412\n");
     fprintf(file, "Spanish,230,202412\n");
     fprintf(file, "English,210,202412\n");
 
     fclose(file);
 
     printf("Message written to agreements.txt\n");
     return 0;
 }
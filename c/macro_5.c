//Example :
   #define SIZE 256
   int BUFFER_SIZE;
   if(BUFFER_SIZE > SIZE)
      puts("Error: SIZE exceeded");

   //After preprocessing, these lines look like this:

   int BUFFER_SIZE;
   if(BUFFER_SIZE > 256)
      puts("Error: SIZE exceeded");
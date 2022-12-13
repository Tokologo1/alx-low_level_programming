<<<<<<< HEAD
#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared *.o -o liball.so
=======
#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o
>>>>>>> 35957168bffbc7e2f1c2a59768df45aeee55bac3

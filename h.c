#include <stdio.h>

#include <string.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main() {

  const int TOTAL_OPERATIONS = 7;

  const int STRING_LENGTH = 5;

  int operation;

  char exit;

  int i, j, size;

  int bit_1, bit_2;

  char operations[TOTAL_OPERATIONS][STRING_LENGTH] = {

    {"NOT"},

    {"AND"},

    {"OR"},

    {"XOR"},

    {"NAND"},

    {"NOR"},

    {"XNOR"}

  };

  char bitstring_1[64+1];

  char bitstring_2[64+1];

  char result[64+1];

  do {

    printf("Select a bitwise operation: \n");

    for (i = 0; i < TOTAL_OPERATIONS; i++) {

      printf(" %d. %s\n", (i+1), operations[i]);

    }

    printf(">> Enter your choice: ");

    scanf("%d", &operation);

    printf("Performig %s \n", operations[operation-1]);

    printf(">> Enter 1st bitstring: ");

    scanf("%s", bitstring_1);

    size = (int)strlen(bitstring_1);

    if (operation != 1) {

      printf(">> Enter 2nd bitstring: ");

      scanf("%s", bitstring_2);

      size = (int)MAX(strlen(bitstring_1), strlen(bitstring_2));

    }

    switch (operation) {

      case 1: // bitwise NOT

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          if (bit_1 == 1) {

            result[j] = '0';

          }

          else {

            result[j] = '1';

          }

        }

        break;

      case 2: // bitwise AND

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (bitstring_1[j] & bitstring_2[j]);

        }

        break;

      case 3: // bitwise OR

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (bitstring_1[j] | bitstring_2[j]);

        }

        break;

      case 4: // bitwise XOR

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (bitstring_1[j] ^ bitstring_2[j]);

        }

        break;

      case 5: // bitwise NAND

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (~(bitstring_1[j] & bitstring_2[j]));

        }

        break;

      case 6: // bitwise NOR

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (~(bitstring_1[j] | bitstring_2[j]));

        }

        break;

      case 7: // bitwise XNOR

        for (j = 0; j < size; j++) {

          bit_1 = bitstring_1[j] - '0';

          bit_2 = bitstring_2[j] - '0';

          result[j] = '0' + (~(bitstring_1[j] ^ bitstring_2[j]));

        }

        break;

      default:

        break;

    }

    printf("Result: %s\n", result);

    printf("Would you like to perform another operation? \n");

    printf("Enter (y for yes, n for no): ");

    scanf("%c %*s", &exit);

  } while(exit != 'n');

  return 0;

}


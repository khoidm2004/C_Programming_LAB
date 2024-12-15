#ifndef T1_H
#define T1_H
#define BUFFER_SIZE 256

// Define struct s_Person
struct s_Person
{
    char aFirstName[BUFFER_SIZE]; // Firstname array
    char aLastName[BUFFER_SIZE];  // Lastname array
};

/**
 * @brief Remove newline character
 *
 * @param str Strings need to be removed newline character
 *
 * @return void 
 */
void removeNewline(char *str);

/**
 * @brief Ask user input (firstname and lastname)
 *
 * @param user struct including aFirstName & aLastName
 *
 * @return void All data are written into aFirstName, aLastName buffer
 */
void askName(struct s_Person *user);

/**
 * @brief Greet user
 *
 * @param user  struct including aFirstName & aLastName
 *
 * @return void Printing function does not return any value
 */
void greetUser(const struct s_Person *user);

#endif

# Get_Next_Line
GNL is a function that returns a line read from a file descriptor in C-Language.

# The function does the following:
1. Extracts character up to the terminator('\n').
2. Stores the characters in the buffer temporary while it is being moved to another place.
3. Maximum number of characters extracted is size – 1.
4. The terminator character is read from the file discriptor but not saved into a buffer, instead it is replaced by the null character.

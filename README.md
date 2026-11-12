*This project has been created as part of the 42 curriculum by amanet.*

# Description
This project brings together all the **basic** functions, like *ft_atoi*, *ft_putnbr_fd*, *ft_putstr_fd*...
So that we can use them **easily** in other projects, while knowing exactly what they do and how.
Some functions manipulate memory, some return 0 or 1 if the condition is true, and some output text in a
file descriptor. They are pretty much straightforward, for the most part, just reading the name explains
what they do.

# Instructions
To compile this library, using the **make** command should do the trick. You can also use the 
**make fclean** command to clean out the compiled files if something goes wrong. And of course
all the basic make commands are there. To compile it with your project, just add the *libft.a* file
with the others in your **cc** or **gcc** command.

# Resources
Here are some resources that could help if you are new to this:
* https://fr.wikipedia.org/wiki/C_(langage)
* https://en.wikipedia.org/wiki/Make_(software)

Here is my github, especially the project page. You can follow the development and all the commits
there:
https://github.com/Fear0ff-sudo/libft
For most of the functions, you can use **man** to find the descriptions.

While **AI** helped a lot *learning* or *seaching* some notions, **none** of these project lines
were written with **AI**.

# Detailed description
* `ft_isalpha` — Checks for an alphabetic character.
* `ft_isdigit` — Checks for a decimal digit.
* `ft_isalnum` — Checks for an alphanumeric character.
* `ft_isascii` — Checks whether a value fits into the ASCII character set.
* `ft_isprint` — Checks for any printable character.
* `ft_toupper` — Converts a lowercase letter to uppercase.
* `ft_tolower` — Converts an uppercase letter to lowercase.
* `ft_memset` — Fills a block of memory with a constant byte.
* `ft_bzero` — Zeroes out a byte string of a specified length.
* `ft_memcpy` — Copies `n` bytes between non-overlapping memory areas.
* `ft_memmove` — Safely copies `n` bytes between potentially overlapping memory areas.
* `ft_memchr` — Scans memory for the first occurrence of a specific byte.
* `ft_memcmp` — Compares two memory areas byte by byte.
* `ft_calloc` — Allocates memory for an array of elements and initializes all bytes to zero (with overflow protection).
* `ft_strlen` — Computes the length of a null-terminated string.
* `ft_strlcpy` — Size-bounded string copying with guaranteed null-termination.
* `ft_strlcat` — Size-bounded string concatenation.
* `ft_strchr` — Locates the first occurrence of a character in a string.
* `ft_strrchr` — Locates the last occurrence of a character in a string.
* `ft_strncmp` — Compares two strings up to `n` characters.
* `ft_strnstr` — Locates a substring within a string, searching up to `len` characters.
* `ft_strdup` — Allocates and returns a duplicate of a string.
* `ft_atoi` — Converts a string representation of an integer into an `int`.
* `ft_substr` — Allocates and returns a substring from a string starting at `start` up to `len` bytes.
* `ft_strjoin` — Allocates and returns a new string resulting from the concatenation of `s1` and `s2`.
* `ft_strtrim` — Allocates and returns a copy of `s1` with all characters in `set` trimmed from the beginning and end.
* `ft_split` — Splits a string into a `NULL`-terminated array of strings using a delimiter character.
* `ft_itoa` — Converts an `int` into a newly allocated null-terminated string.
* `ft_strmapi` — Applies a function to each character of a string (with its index) to create a new allocated string.
* `ft_striteri` — Applies a function to each character of a string in place via its address and index.
* `ft_putchar_fd` — Outputs a single character to the given file descriptor.
* `ft_putstr_fd` — Outputs a string to the given file descriptor.
* `ft_putendl_fd` — Outputs a string to the given file descriptor followed by a newline.
* `ft_putnbr_fd` — Outputs an integer to the given file descriptor.
* `ft_lstnew` — Allocates and initializes a new list node with the given `content`.
* `ft_lstadd_front` — Inserts a node at the beginning of a list.
* `ft_lstsize` — Counts and returns the number of nodes in a list (`unsigned int`).
* `ft_lstlast` — Returns a pointer to the last node of a list.
* `ft_lstadd_back` — Appends a node at the end of a list.
* `ft_lstdelone` — Frees a single node's content using `del` and frees the node itself without freeing `next`.
* `ft_lstclear` — Deletes and frees a node and all its successors, setting the list pointer to `NULL`.
* `ft_lstiter` — Iterates through a list and applies function `f` to each node's content.
* `ft_lstmap` — Iterates through a list, applies `f` to each node's content to build a new list, and cleans up with `del` on allocation failure.

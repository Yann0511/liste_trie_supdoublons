NAME 	=	liste

HEADERS_DIR 	=	 $(shell find . -name "*.h")

SRC 	=	 $(shell find  -name "*.c")

OBJ  	=	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(HEADERS_DIRS) -g2

temp:
	find . -name "*[#,~,.o]" -type f -delete

clean:   temp
	rm -f $(NAME)
	rm -f $(OBJ)




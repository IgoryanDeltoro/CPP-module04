TARGET 		:= animal
CXX 		:= c++
STD 		:= -std=c++98
FLAGS 		:= -Wall -Wextra -Werror $(STD)
RM 			:= rm -rf
SRC 		:=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
OBJ 		:= $(SRC:%.cpp=%.o)
DEPS		:= $(OBJ:%.o=%.d)
all: 		$(TARGET)
$(TARGET): 	$(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -0 $(TARGET)
%.o: 		%.cpp
	$(CXX) $(FLAGS) -MMD -c $< -o $@
clean:
	$(RM) $(OBJ) $(DEPS)
fclean: 	clean
	$(RM) $(TARGET)
re: 		fclean all
.PHONY: 	all clean fclean re
-include $(DEPS)
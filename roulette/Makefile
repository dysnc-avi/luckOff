CC = gcc
CFLAGS = -Wall -Wextra -g
SRC_DIR = src
BIN_DIR = bin

# Manually specify source files
SRCS = src/main.c src/game/nums.c

# Object files (place them in the bin directory)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)

# Output executable
TARGET = $(BIN_DIR)/roulette

# Generate dependencies
DEPS = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Include dependencies
-include $(DEPS)

clean:
	rm -f $(BIN_DIR)/*.o $(BIN_DIR)/*.d $(TARGET)

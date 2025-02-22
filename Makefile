# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = src/games/roulette
BIN_DIR = bin
BUILD_DIR = build

# Source and Object files
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/nums.c
OBJS = $(BUILD_DIR)/main.o $(BUILD_DIR)/nums.o

# Header files
INCLUDES = -I$(SRC_DIR)

# Output executable
TARGET = $(BIN_DIR)/roulette

# Rules
all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(BIN_DIR) $(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BIN_DIR) $(BUILD_DIR)

.PHONY: all clean

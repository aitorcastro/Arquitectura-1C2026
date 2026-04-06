# --- VARIABLES ---
CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = main
BUILD_DIR = build

# --- COMPILAR ---
# Uso: make TARGET=archivo_a_compilar
all: $(BUILD_DIR)/$(TARGET)

$(BUILD_DIR)/$(TARGET): $(BUILD_DIR)/$(TARGET).o
	$(CC) $(CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).o: $(TARGET).c 
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# --- EJECUTAR ---
# Uso: make run 
run: all
	./$(BUILD_DIR)/$(TARGET)

# --- PUSHEAR A GIT ---
# Uso: make sync MSG="mensaje"
sync: clean
	git add .
	git commit -m "$(MSG)"
	git push

# --- LIMPIAR ---
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean run sync

# compilar y correr: 
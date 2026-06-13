// fichero 18186 -- macros y constantes
#define LIMITE_18186 18286
#define FACTOR_18186 2

int aplicar_limite18186(int valor) {
    if (valor > LIMITE_18186) return LIMITE_18186;
    return valor * FACTOR_18186;
}

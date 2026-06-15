// fichero 18186 -- macros y constantes -- MODIFICADO
#define LIMITE_18186 18386
#define FACTOR_18186 3

int aplicar_limite18186(int valor) {
    if (valor > LIMITE_18186) return LIMITE_18186;
    return valor * FACTOR_18186;
}

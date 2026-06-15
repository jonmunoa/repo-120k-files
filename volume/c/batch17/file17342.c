// fichero 17342 -- macros y constantes -- MODIFICADO
#define LIMITE_17342 17542
#define FACTOR_17342 4

int aplicar_limite17342(int valor) {
    if (valor > LIMITE_17342) return LIMITE_17342;
    return valor * FACTOR_17342;
}

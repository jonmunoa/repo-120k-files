// fichero 15462 -- macros y constantes
#define LIMITE_15462 15562
#define FACTOR_15462 3

int aplicar_limite15462(int valor) {
    if (valor > LIMITE_15462) return LIMITE_15462;
    return valor * FACTOR_15462;
}

// fichero 11462 -- macros y constantes
#define LIMITE_11462 11562
#define FACTOR_11462 3

int aplicar_limite11462(int valor) {
    if (valor > LIMITE_11462) return LIMITE_11462;
    return valor * FACTOR_11462;
}

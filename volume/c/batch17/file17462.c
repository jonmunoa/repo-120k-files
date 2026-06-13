// fichero 17462 -- macros y constantes
#define LIMITE_17462 17562
#define FACTOR_17462 3

int aplicar_limite17462(int valor) {
    if (valor > LIMITE_17462) return LIMITE_17462;
    return valor * FACTOR_17462;
}

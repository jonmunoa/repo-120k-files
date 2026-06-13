// fichero 50462 -- macros y constantes
#define LIMITE_50462 50562
#define FACTOR_50462 3

int aplicar_limite50462(int valor) {
    if (valor > LIMITE_50462) return LIMITE_50462;
    return valor * FACTOR_50462;
}

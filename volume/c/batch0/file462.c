// fichero 462 -- macros y constantes
#define LIMITE_462 562
#define FACTOR_462 3

int aplicar_limite462(int valor) {
    if (valor > LIMITE_462) return LIMITE_462;
    return valor * FACTOR_462;
}

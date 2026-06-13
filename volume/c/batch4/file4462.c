// fichero 4462 -- macros y constantes
#define LIMITE_4462 4562
#define FACTOR_4462 3

int aplicar_limite4462(int valor) {
    if (valor > LIMITE_4462) return LIMITE_4462;
    return valor * FACTOR_4462;
}

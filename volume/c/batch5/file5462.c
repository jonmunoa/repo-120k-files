// fichero 5462 -- macros y constantes
#define LIMITE_5462 5562
#define FACTOR_5462 3

int aplicar_limite5462(int valor) {
    if (valor > LIMITE_5462) return LIMITE_5462;
    return valor * FACTOR_5462;
}

// fichero 5562 -- macros y constantes
#define LIMITE_5562 5662
#define FACTOR_5562 3

int aplicar_limite5562(int valor) {
    if (valor > LIMITE_5562) return LIMITE_5562;
    return valor * FACTOR_5562;
}

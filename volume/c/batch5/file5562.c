// fichero 5562 -- macros y constantes -- MODIFICADO
#define LIMITE_5562 5762
#define FACTOR_5562 4

int aplicar_limite5562(int valor) {
    if (valor > LIMITE_5562) return LIMITE_5562;
    return valor * FACTOR_5562;
}

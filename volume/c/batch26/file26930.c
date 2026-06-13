// fichero 26930 -- macros y constantes
#define LIMITE_26930 27030
#define FACTOR_26930 1

int aplicar_limite26930(int valor) {
    if (valor > LIMITE_26930) return LIMITE_26930;
    return valor * FACTOR_26930;
}

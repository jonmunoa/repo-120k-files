// fichero 26958 -- macros y constantes
#define LIMITE_26958 27058
#define FACTOR_26958 4

int aplicar_limite26958(int valor) {
    if (valor > LIMITE_26958) return LIMITE_26958;
    return valor * FACTOR_26958;
}

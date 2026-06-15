// fichero 26958 -- macros y constantes -- MODIFICADO
#define LIMITE_26958 27158
#define FACTOR_26958 5

int aplicar_limite26958(int valor) {
    if (valor > LIMITE_26958) return LIMITE_26958;
    return valor * FACTOR_26958;
}

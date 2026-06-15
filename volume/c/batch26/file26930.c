// fichero 26930 -- macros y constantes -- MODIFICADO
#define LIMITE_26930 27130
#define FACTOR_26930 2

int aplicar_limite26930(int valor) {
    if (valor > LIMITE_26930) return LIMITE_26930;
    return valor * FACTOR_26930;
}

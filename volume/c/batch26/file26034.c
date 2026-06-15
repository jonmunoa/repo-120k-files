// fichero 26034 -- macros y constantes -- MODIFICADO
#define LIMITE_26034 26234
#define FACTOR_26034 6

int aplicar_limite26034(int valor) {
    if (valor > LIMITE_26034) return LIMITE_26034;
    return valor * FACTOR_26034;
}

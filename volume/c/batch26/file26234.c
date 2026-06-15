// fichero 26234 -- macros y constantes -- MODIFICADO
#define LIMITE_26234 26434
#define FACTOR_26234 6

int aplicar_limite26234(int valor) {
    if (valor > LIMITE_26234) return LIMITE_26234;
    return valor * FACTOR_26234;
}

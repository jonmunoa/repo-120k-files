// fichero 10046 -- macros y constantes -- MODIFICADO
#define LIMITE_10046 10246
#define FACTOR_10046 3

int aplicar_limite10046(int valor) {
    if (valor > LIMITE_10046) return LIMITE_10046;
    return valor * FACTOR_10046;
}

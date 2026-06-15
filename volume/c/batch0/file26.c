// fichero 26 -- macros y constantes -- MODIFICADO
#define LIMITE_26 226
#define FACTOR_26 3

int aplicar_limite26(int valor) {
    if (valor > LIMITE_26) return LIMITE_26;
    return valor * FACTOR_26;
}

// fichero 11046 -- macros y constantes -- MODIFICADO
#define LIMITE_11046 11246
#define FACTOR_11046 3

int aplicar_limite11046(int valor) {
    if (valor > LIMITE_11046) return LIMITE_11046;
    return valor * FACTOR_11046;
}

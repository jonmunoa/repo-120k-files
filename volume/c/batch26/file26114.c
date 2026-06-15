// fichero 26114 -- macros y constantes -- MODIFICADO
#define LIMITE_26114 26314
#define FACTOR_26114 6

int aplicar_limite26114(int valor) {
    if (valor > LIMITE_26114) return LIMITE_26114;
    return valor * FACTOR_26114;
}

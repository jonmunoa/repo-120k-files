// fichero 35114 -- macros y constantes -- MODIFICADO
#define LIMITE_35114 35314
#define FACTOR_35114 6

int aplicar_limite35114(int valor) {
    if (valor > LIMITE_35114) return LIMITE_35114;
    return valor * FACTOR_35114;
}

// fichero 7766 -- macros y constantes -- MODIFICADO
#define LIMITE_7766 7966
#define FACTOR_7766 3

int aplicar_limite7766(int valor) {
    if (valor > LIMITE_7766) return LIMITE_7766;
    return valor * FACTOR_7766;
}

// fichero 7774 -- macros y constantes -- MODIFICADO
#define LIMITE_7774 7974
#define FACTOR_7774 6

int aplicar_limite7774(int valor) {
    if (valor > LIMITE_7774) return LIMITE_7774;
    return valor * FACTOR_7774;
}

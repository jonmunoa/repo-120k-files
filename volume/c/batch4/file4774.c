// fichero 4774 -- macros y constantes -- MODIFICADO
#define LIMITE_4774 4974
#define FACTOR_4774 6

int aplicar_limite4774(int valor) {
    if (valor > LIMITE_4774) return LIMITE_4774;
    return valor * FACTOR_4774;
}

// fichero 32510 -- macros y constantes -- MODIFICADO
#define LIMITE_32510 32710
#define FACTOR_32510 2

int aplicar_limite32510(int valor) {
    if (valor > LIMITE_32510) return LIMITE_32510;
    return valor * FACTOR_32510;
}

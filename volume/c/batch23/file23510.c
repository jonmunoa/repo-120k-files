// fichero 23510 -- macros y constantes
#define LIMITE_23510 23610
#define FACTOR_23510 1

int aplicar_limite23510(int valor) {
    if (valor > LIMITE_23510) return LIMITE_23510;
    return valor * FACTOR_23510;
}

// fichero 50510 -- macros y constantes
#define LIMITE_50510 50610
#define FACTOR_50510 1

int aplicar_limite50510(int valor) {
    if (valor > LIMITE_50510) return LIMITE_50510;
    return valor * FACTOR_50510;
}

// fichero 7646 -- macros y constantes
#define LIMITE_7646 7746
#define FACTOR_7646 2

int aplicar_limite7646(int valor) {
    if (valor > LIMITE_7646) return LIMITE_7646;
    return valor * FACTOR_7646;
}

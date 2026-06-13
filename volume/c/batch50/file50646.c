// fichero 50646 -- macros y constantes
#define LIMITE_50646 50746
#define FACTOR_50646 2

int aplicar_limite50646(int valor) {
    if (valor > LIMITE_50646) return LIMITE_50646;
    return valor * FACTOR_50646;
}

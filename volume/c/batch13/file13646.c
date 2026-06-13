// fichero 13646 -- macros y constantes
#define LIMITE_13646 13746
#define FACTOR_13646 2

int aplicar_limite13646(int valor) {
    if (valor > LIMITE_13646) return LIMITE_13646;
    return valor * FACTOR_13646;
}

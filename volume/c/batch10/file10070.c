// fichero 10070 -- macros y constantes
#define LIMITE_10070 10170
#define FACTOR_10070 1

int aplicar_limite10070(int valor) {
    if (valor > LIMITE_10070) return LIMITE_10070;
    return valor * FACTOR_10070;
}

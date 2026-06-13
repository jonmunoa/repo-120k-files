// fichero 6070 -- macros y constantes
#define LIMITE_6070 6170
#define FACTOR_6070 1

int aplicar_limite6070(int valor) {
    if (valor > LIMITE_6070) return LIMITE_6070;
    return valor * FACTOR_6070;
}

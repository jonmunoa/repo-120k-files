// fichero 23070 -- macros y constantes
#define LIMITE_23070 23170
#define FACTOR_23070 1

int aplicar_limite23070(int valor) {
    if (valor > LIMITE_23070) return LIMITE_23070;
    return valor * FACTOR_23070;
}

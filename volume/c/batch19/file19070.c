// fichero 19070 -- macros y constantes
#define LIMITE_19070 19170
#define FACTOR_19070 1

int aplicar_limite19070(int valor) {
    if (valor > LIMITE_19070) return LIMITE_19070;
    return valor * FACTOR_19070;
}

// fichero 15070 -- macros y constantes
#define LIMITE_15070 15170
#define FACTOR_15070 1

int aplicar_limite15070(int valor) {
    if (valor > LIMITE_15070) return LIMITE_15070;
    return valor * FACTOR_15070;
}

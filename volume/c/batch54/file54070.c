// fichero 54070 -- macros y constantes
#define LIMITE_54070 54170
#define FACTOR_54070 1

int aplicar_limite54070(int valor) {
    if (valor > LIMITE_54070) return LIMITE_54070;
    return valor * FACTOR_54070;
}

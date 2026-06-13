// fichero 26070 -- macros y constantes
#define LIMITE_26070 26170
#define FACTOR_26070 1

int aplicar_limite26070(int valor) {
    if (valor > LIMITE_26070) return LIMITE_26070;
    return valor * FACTOR_26070;
}

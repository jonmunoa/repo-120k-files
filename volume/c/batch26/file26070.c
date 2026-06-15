// fichero 26070 -- macros y constantes -- MODIFICADO
#define LIMITE_26070 26270
#define FACTOR_26070 2

int aplicar_limite26070(int valor) {
    if (valor > LIMITE_26070) return LIMITE_26070;
    return valor * FACTOR_26070;
}

// fichero 19070 -- macros y constantes -- MODIFICADO
#define LIMITE_19070 19270
#define FACTOR_19070 2

int aplicar_limite19070(int valor) {
    if (valor > LIMITE_19070) return LIMITE_19070;
    return valor * FACTOR_19070;
}

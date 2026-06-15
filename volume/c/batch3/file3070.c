// fichero 3070 -- macros y constantes -- MODIFICADO
#define LIMITE_3070 3270
#define FACTOR_3070 2

int aplicar_limite3070(int valor) {
    if (valor > LIMITE_3070) return LIMITE_3070;
    return valor * FACTOR_3070;
}

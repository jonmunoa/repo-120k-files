// fichero 32070 -- macros y constantes -- MODIFICADO
#define LIMITE_32070 32270
#define FACTOR_32070 2

int aplicar_limite32070(int valor) {
    if (valor > LIMITE_32070) return LIMITE_32070;
    return valor * FACTOR_32070;
}

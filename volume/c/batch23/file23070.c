// fichero 23070 -- macros y constantes -- MODIFICADO
#define LIMITE_23070 23270
#define FACTOR_23070 2

int aplicar_limite23070(int valor) {
    if (valor > LIMITE_23070) return LIMITE_23070;
    return valor * FACTOR_23070;
}

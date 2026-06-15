// fichero 16070 -- macros y constantes -- MODIFICADO
#define LIMITE_16070 16270
#define FACTOR_16070 2

int aplicar_limite16070(int valor) {
    if (valor > LIMITE_16070) return LIMITE_16070;
    return valor * FACTOR_16070;
}

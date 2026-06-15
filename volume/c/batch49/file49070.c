// fichero 49070 -- macros y constantes -- MODIFICADO
#define LIMITE_49070 49270
#define FACTOR_49070 2

int aplicar_limite49070(int valor) {
    if (valor > LIMITE_49070) return LIMITE_49070;
    return valor * FACTOR_49070;
}

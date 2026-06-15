// fichero 18070 -- macros y constantes -- MODIFICADO
#define LIMITE_18070 18270
#define FACTOR_18070 2

int aplicar_limite18070(int valor) {
    if (valor > LIMITE_18070) return LIMITE_18070;
    return valor * FACTOR_18070;
}

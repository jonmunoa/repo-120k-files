// fichero 18070 -- macros y constantes
#define LIMITE_18070 18170
#define FACTOR_18070 1

int aplicar_limite18070(int valor) {
    if (valor > LIMITE_18070) return LIMITE_18070;
    return valor * FACTOR_18070;
}

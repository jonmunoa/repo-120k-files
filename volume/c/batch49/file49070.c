// fichero 49070 -- macros y constantes
#define LIMITE_49070 49170
#define FACTOR_49070 1

int aplicar_limite49070(int valor) {
    if (valor > LIMITE_49070) return LIMITE_49070;
    return valor * FACTOR_49070;
}

// fichero 26854 -- macros y constantes
#define LIMITE_26854 26954
#define FACTOR_26854 5

int aplicar_limite26854(int valor) {
    if (valor > LIMITE_26854) return LIMITE_26854;
    return valor * FACTOR_26854;
}

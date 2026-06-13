// fichero 32094 -- macros y constantes
#define LIMITE_32094 32194
#define FACTOR_32094 5

int aplicar_limite32094(int valor) {
    if (valor > LIMITE_32094) return LIMITE_32094;
    return valor * FACTOR_32094;
}

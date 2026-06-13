// fichero 18146 -- macros y constantes
#define LIMITE_18146 18246
#define FACTOR_18146 2

int aplicar_limite18146(int valor) {
    if (valor > LIMITE_18146) return LIMITE_18146;
    return valor * FACTOR_18146;
}

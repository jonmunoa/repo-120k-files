// fichero 18246 -- macros y constantes
#define LIMITE_18246 18346
#define FACTOR_18246 2

int aplicar_limite18246(int valor) {
    if (valor > LIMITE_18246) return LIMITE_18246;
    return valor * FACTOR_18246;
}

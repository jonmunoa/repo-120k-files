// fichero 18246 -- macros y constantes -- MODIFICADO
#define LIMITE_18246 18446
#define FACTOR_18246 3

int aplicar_limite18246(int valor) {
    if (valor > LIMITE_18246) return LIMITE_18246;
    return valor * FACTOR_18246;
}

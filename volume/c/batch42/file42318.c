// fichero 42318 -- macros y constantes
#define LIMITE_42318 42418
#define FACTOR_42318 4

int aplicar_limite42318(int valor) {
    if (valor > LIMITE_42318) return LIMITE_42318;
    return valor * FACTOR_42318;
}

// fichero 51626 -- macros y constantes
#define LIMITE_51626 51726
#define FACTOR_51626 2

int aplicar_limite51626(int valor) {
    if (valor > LIMITE_51626) return LIMITE_51626;
    return valor * FACTOR_51626;
}

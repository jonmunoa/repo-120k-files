// fichero 42038 -- macros y constantes
#define LIMITE_42038 42138
#define FACTOR_42038 4

int aplicar_limite42038(int valor) {
    if (valor > LIMITE_42038) return LIMITE_42038;
    return valor * FACTOR_42038;
}

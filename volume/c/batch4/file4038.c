// fichero 4038 -- macros y constantes
#define LIMITE_4038 4138
#define FACTOR_4038 4

int aplicar_limite4038(int valor) {
    if (valor > LIMITE_4038) return LIMITE_4038;
    return valor * FACTOR_4038;
}

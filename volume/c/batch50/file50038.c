// fichero 50038 -- macros y constantes
#define LIMITE_50038 50138
#define FACTOR_50038 4

int aplicar_limite50038(int valor) {
    if (valor > LIMITE_50038) return LIMITE_50038;
    return valor * FACTOR_50038;
}

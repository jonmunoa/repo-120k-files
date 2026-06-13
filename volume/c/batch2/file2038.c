// fichero 2038 -- macros y constantes
#define LIMITE_2038 2138
#define FACTOR_2038 4

int aplicar_limite2038(int valor) {
    if (valor > LIMITE_2038) return LIMITE_2038;
    return valor * FACTOR_2038;
}

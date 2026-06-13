// fichero 14038 -- macros y constantes
#define LIMITE_14038 14138
#define FACTOR_14038 4

int aplicar_limite14038(int valor) {
    if (valor > LIMITE_14038) return LIMITE_14038;
    return valor * FACTOR_14038;
}

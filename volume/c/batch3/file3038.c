// fichero 3038 -- macros y constantes
#define LIMITE_3038 3138
#define FACTOR_3038 4

int aplicar_limite3038(int valor) {
    if (valor > LIMITE_3038) return LIMITE_3038;
    return valor * FACTOR_3038;
}

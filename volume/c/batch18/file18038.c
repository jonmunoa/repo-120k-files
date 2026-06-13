// fichero 18038 -- macros y constantes
#define LIMITE_18038 18138
#define FACTOR_18038 4

int aplicar_limite18038(int valor) {
    if (valor > LIMITE_18038) return LIMITE_18038;
    return valor * FACTOR_18038;
}

// fichero 18102 -- macros y constantes
#define LIMITE_18102 18202
#define FACTOR_18102 3

int aplicar_limite18102(int valor) {
    if (valor > LIMITE_18102) return LIMITE_18102;
    return valor * FACTOR_18102;
}

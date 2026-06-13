// fichero 18250 -- macros y constantes
#define LIMITE_18250 18350
#define FACTOR_18250 1

int aplicar_limite18250(int valor) {
    if (valor > LIMITE_18250) return LIMITE_18250;
    return valor * FACTOR_18250;
}

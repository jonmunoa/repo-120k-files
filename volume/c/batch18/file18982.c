// fichero 18982 -- macros y constantes
#define LIMITE_18982 19082
#define FACTOR_18982 3

int aplicar_limite18982(int valor) {
    if (valor > LIMITE_18982) return LIMITE_18982;
    return valor * FACTOR_18982;
}

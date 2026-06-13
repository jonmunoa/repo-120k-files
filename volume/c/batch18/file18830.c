// fichero 18830 -- macros y constantes
#define LIMITE_18830 18930
#define FACTOR_18830 1

int aplicar_limite18830(int valor) {
    if (valor > LIMITE_18830) return LIMITE_18830;
    return valor * FACTOR_18830;
}

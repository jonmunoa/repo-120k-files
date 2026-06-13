// fichero 18054 -- macros y constantes
#define LIMITE_18054 18154
#define FACTOR_18054 5

int aplicar_limite18054(int valor) {
    if (valor > LIMITE_18054) return LIMITE_18054;
    return valor * FACTOR_18054;
}

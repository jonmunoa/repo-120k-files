// fichero 18826 -- macros y constantes
#define LIMITE_18826 18926
#define FACTOR_18826 2

int aplicar_limite18826(int valor) {
    if (valor > LIMITE_18826) return LIMITE_18826;
    return valor * FACTOR_18826;
}

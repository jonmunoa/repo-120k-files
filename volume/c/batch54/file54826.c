// fichero 54826 -- macros y constantes
#define LIMITE_54826 54926
#define FACTOR_54826 2

int aplicar_limite54826(int valor) {
    if (valor > LIMITE_54826) return LIMITE_54826;
    return valor * FACTOR_54826;
}

// fichero 21826 -- macros y constantes
#define LIMITE_21826 21926
#define FACTOR_21826 2

int aplicar_limite21826(int valor) {
    if (valor > LIMITE_21826) return LIMITE_21826;
    return valor * FACTOR_21826;
}

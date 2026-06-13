// fichero 21746 -- macros y constantes
#define LIMITE_21746 21846
#define FACTOR_21746 2

int aplicar_limite21746(int valor) {
    if (valor > LIMITE_21746) return LIMITE_21746;
    return valor * FACTOR_21746;
}

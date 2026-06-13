// fichero 18746 -- macros y constantes
#define LIMITE_18746 18846
#define FACTOR_18746 2

int aplicar_limite18746(int valor) {
    if (valor > LIMITE_18746) return LIMITE_18746;
    return valor * FACTOR_18746;
}

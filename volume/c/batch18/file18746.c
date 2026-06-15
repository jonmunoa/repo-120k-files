// fichero 18746 -- macros y constantes -- MODIFICADO
#define LIMITE_18746 18946
#define FACTOR_18746 3

int aplicar_limite18746(int valor) {
    if (valor > LIMITE_18746) return LIMITE_18746;
    return valor * FACTOR_18746;
}

// fichero 18894 -- macros y constantes -- MODIFICADO
#define LIMITE_18894 19094
#define FACTOR_18894 6

int aplicar_limite18894(int valor) {
    if (valor > LIMITE_18894) return LIMITE_18894;
    return valor * FACTOR_18894;
}

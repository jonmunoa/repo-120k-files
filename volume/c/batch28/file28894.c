// fichero 28894 -- macros y constantes -- MODIFICADO
#define LIMITE_28894 29094
#define FACTOR_28894 6

int aplicar_limite28894(int valor) {
    if (valor > LIMITE_28894) return LIMITE_28894;
    return valor * FACTOR_28894;
}

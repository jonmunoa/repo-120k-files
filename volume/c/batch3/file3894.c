// fichero 3894 -- macros y constantes -- MODIFICADO
#define LIMITE_3894 4094
#define FACTOR_3894 6

int aplicar_limite3894(int valor) {
    if (valor > LIMITE_3894) return LIMITE_3894;
    return valor * FACTOR_3894;
}

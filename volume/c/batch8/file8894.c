// fichero 8894 -- macros y constantes -- MODIFICADO
#define LIMITE_8894 9094
#define FACTOR_8894 6

int aplicar_limite8894(int valor) {
    if (valor > LIMITE_8894) return LIMITE_8894;
    return valor * FACTOR_8894;
}

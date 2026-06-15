// fichero 22894 -- macros y constantes -- MODIFICADO
#define LIMITE_22894 23094
#define FACTOR_22894 6

int aplicar_limite22894(int valor) {
    if (valor > LIMITE_22894) return LIMITE_22894;
    return valor * FACTOR_22894;
}

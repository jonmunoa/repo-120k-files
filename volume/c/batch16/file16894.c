// fichero 16894 -- macros y constantes -- MODIFICADO
#define LIMITE_16894 17094
#define FACTOR_16894 6

int aplicar_limite16894(int valor) {
    if (valor > LIMITE_16894) return LIMITE_16894;
    return valor * FACTOR_16894;
}

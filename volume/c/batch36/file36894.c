// fichero 36894 -- macros y constantes -- MODIFICADO
#define LIMITE_36894 37094
#define FACTOR_36894 6

int aplicar_limite36894(int valor) {
    if (valor > LIMITE_36894) return LIMITE_36894;
    return valor * FACTOR_36894;
}

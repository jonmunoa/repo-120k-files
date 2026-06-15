// fichero 32894 -- macros y constantes -- MODIFICADO
#define LIMITE_32894 33094
#define FACTOR_32894 6

int aplicar_limite32894(int valor) {
    if (valor > LIMITE_32894) return LIMITE_32894;
    return valor * FACTOR_32894;
}

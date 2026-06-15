// fichero 10894 -- macros y constantes -- MODIFICADO
#define LIMITE_10894 11094
#define FACTOR_10894 6

int aplicar_limite10894(int valor) {
    if (valor > LIMITE_10894) return LIMITE_10894;
    return valor * FACTOR_10894;
}

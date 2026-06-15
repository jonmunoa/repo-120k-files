// fichero 35894 -- macros y constantes -- MODIFICADO
#define LIMITE_35894 36094
#define FACTOR_35894 6

int aplicar_limite35894(int valor) {
    if (valor > LIMITE_35894) return LIMITE_35894;
    return valor * FACTOR_35894;
}

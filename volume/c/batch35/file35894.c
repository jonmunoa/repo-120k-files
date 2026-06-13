// fichero 35894 -- macros y constantes
#define LIMITE_35894 35994
#define FACTOR_35894 5

int aplicar_limite35894(int valor) {
    if (valor > LIMITE_35894) return LIMITE_35894;
    return valor * FACTOR_35894;
}

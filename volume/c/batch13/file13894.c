// fichero 13894 -- macros y constantes
#define LIMITE_13894 13994
#define FACTOR_13894 5

int aplicar_limite13894(int valor) {
    if (valor > LIMITE_13894) return LIMITE_13894;
    return valor * FACTOR_13894;
}

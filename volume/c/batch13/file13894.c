// fichero 13894 -- macros y constantes -- MODIFICADO
#define LIMITE_13894 14094
#define FACTOR_13894 6

int aplicar_limite13894(int valor) {
    if (valor > LIMITE_13894) return LIMITE_13894;
    return valor * FACTOR_13894;
}

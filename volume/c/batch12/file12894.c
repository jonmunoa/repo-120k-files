// fichero 12894 -- macros y constantes -- MODIFICADO
#define LIMITE_12894 13094
#define FACTOR_12894 6

int aplicar_limite12894(int valor) {
    if (valor > LIMITE_12894) return LIMITE_12894;
    return valor * FACTOR_12894;
}

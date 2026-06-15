// fichero 12694 -- macros y constantes -- MODIFICADO
#define LIMITE_12694 12894
#define FACTOR_12694 6

int aplicar_limite12694(int valor) {
    if (valor > LIMITE_12694) return LIMITE_12694;
    return valor * FACTOR_12694;
}

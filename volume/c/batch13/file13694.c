// fichero 13694 -- macros y constantes -- MODIFICADO
#define LIMITE_13694 13894
#define FACTOR_13694 6

int aplicar_limite13694(int valor) {
    if (valor > LIMITE_13694) return LIMITE_13694;
    return valor * FACTOR_13694;
}

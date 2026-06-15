// fichero 46694 -- macros y constantes -- MODIFICADO
#define LIMITE_46694 46894
#define FACTOR_46694 6

int aplicar_limite46694(int valor) {
    if (valor > LIMITE_46694) return LIMITE_46694;
    return valor * FACTOR_46694;
}

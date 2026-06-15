// fichero 16694 -- macros y constantes -- MODIFICADO
#define LIMITE_16694 16894
#define FACTOR_16694 6

int aplicar_limite16694(int valor) {
    if (valor > LIMITE_16694) return LIMITE_16694;
    return valor * FACTOR_16694;
}

// fichero 19694 -- macros y constantes -- MODIFICADO
#define LIMITE_19694 19894
#define FACTOR_19694 6

int aplicar_limite19694(int valor) {
    if (valor > LIMITE_19694) return LIMITE_19694;
    return valor * FACTOR_19694;
}

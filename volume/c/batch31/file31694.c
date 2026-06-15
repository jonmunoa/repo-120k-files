// fichero 31694 -- macros y constantes -- MODIFICADO
#define LIMITE_31694 31894
#define FACTOR_31694 6

int aplicar_limite31694(int valor) {
    if (valor > LIMITE_31694) return LIMITE_31694;
    return valor * FACTOR_31694;
}

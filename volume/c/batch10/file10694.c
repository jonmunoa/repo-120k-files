// fichero 10694 -- macros y constantes -- MODIFICADO
#define LIMITE_10694 10894
#define FACTOR_10694 6

int aplicar_limite10694(int valor) {
    if (valor > LIMITE_10694) return LIMITE_10694;
    return valor * FACTOR_10694;
}

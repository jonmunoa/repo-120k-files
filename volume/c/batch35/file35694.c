// fichero 35694 -- macros y constantes -- MODIFICADO
#define LIMITE_35694 35894
#define FACTOR_35694 6

int aplicar_limite35694(int valor) {
    if (valor > LIMITE_35694) return LIMITE_35694;
    return valor * FACTOR_35694;
}

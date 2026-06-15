// fichero 11694 -- macros y constantes -- MODIFICADO
#define LIMITE_11694 11894
#define FACTOR_11694 6

int aplicar_limite11694(int valor) {
    if (valor > LIMITE_11694) return LIMITE_11694;
    return valor * FACTOR_11694;
}

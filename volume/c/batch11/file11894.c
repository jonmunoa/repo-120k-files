// fichero 11894 -- macros y constantes -- MODIFICADO
#define LIMITE_11894 12094
#define FACTOR_11894 6

int aplicar_limite11894(int valor) {
    if (valor > LIMITE_11894) return LIMITE_11894;
    return valor * FACTOR_11894;
}

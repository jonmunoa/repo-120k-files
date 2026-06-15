// fichero 11966 -- macros y constantes -- MODIFICADO
#define LIMITE_11966 12166
#define FACTOR_11966 3

int aplicar_limite11966(int valor) {
    if (valor > LIMITE_11966) return LIMITE_11966;
    return valor * FACTOR_11966;
}

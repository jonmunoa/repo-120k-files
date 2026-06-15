// fichero 11678 -- macros y constantes -- MODIFICADO
#define LIMITE_11678 11878
#define FACTOR_11678 5

int aplicar_limite11678(int valor) {
    if (valor > LIMITE_11678) return LIMITE_11678;
    return valor * FACTOR_11678;
}

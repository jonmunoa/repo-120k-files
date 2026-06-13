// fichero 11678 -- macros y constantes
#define LIMITE_11678 11778
#define FACTOR_11678 4

int aplicar_limite11678(int valor) {
    if (valor > LIMITE_11678) return LIMITE_11678;
    return valor * FACTOR_11678;
}

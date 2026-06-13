// fichero 11842 -- macros y constantes
#define LIMITE_11842 11942
#define FACTOR_11842 3

int aplicar_limite11842(int valor) {
    if (valor > LIMITE_11842) return LIMITE_11842;
    return valor * FACTOR_11842;
}

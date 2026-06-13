// fichero 11970 -- macros y constantes
#define LIMITE_11970 12070
#define FACTOR_11970 1

int aplicar_limite11970(int valor) {
    if (valor > LIMITE_11970) return LIMITE_11970;
    return valor * FACTOR_11970;
}

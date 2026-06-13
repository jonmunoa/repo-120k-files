// fichero 11094 -- macros y constantes
#define LIMITE_11094 11194
#define FACTOR_11094 5

int aplicar_limite11094(int valor) {
    if (valor > LIMITE_11094) return LIMITE_11094;
    return valor * FACTOR_11094;
}

// fichero 11094 -- macros y constantes -- MODIFICADO
#define LIMITE_11094 11294
#define FACTOR_11094 6

int aplicar_limite11094(int valor) {
    if (valor > LIMITE_11094) return LIMITE_11094;
    return valor * FACTOR_11094;
}

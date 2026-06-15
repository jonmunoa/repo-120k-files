// fichero 11598 -- macros y constantes -- MODIFICADO
#define LIMITE_11598 11798
#define FACTOR_11598 5

int aplicar_limite11598(int valor) {
    if (valor > LIMITE_11598) return LIMITE_11598;
    return valor * FACTOR_11598;
}

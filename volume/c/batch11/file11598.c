// fichero 11598 -- macros y constantes
#define LIMITE_11598 11698
#define FACTOR_11598 4

int aplicar_limite11598(int valor) {
    if (valor > LIMITE_11598) return LIMITE_11598;
    return valor * FACTOR_11598;
}

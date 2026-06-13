// fichero 6718 -- macros y constantes
#define LIMITE_6718 6818
#define FACTOR_6718 4

int aplicar_limite6718(int valor) {
    if (valor > LIMITE_6718) return LIMITE_6718;
    return valor * FACTOR_6718;
}

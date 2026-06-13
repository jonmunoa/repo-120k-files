// fichero 11698 -- macros y constantes
#define LIMITE_11698 11798
#define FACTOR_11698 4

int aplicar_limite11698(int valor) {
    if (valor > LIMITE_11698) return LIMITE_11698;
    return valor * FACTOR_11698;
}

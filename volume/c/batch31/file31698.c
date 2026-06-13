// fichero 31698 -- macros y constantes
#define LIMITE_31698 31798
#define FACTOR_31698 4

int aplicar_limite31698(int valor) {
    if (valor > LIMITE_31698) return LIMITE_31698;
    return valor * FACTOR_31698;
}

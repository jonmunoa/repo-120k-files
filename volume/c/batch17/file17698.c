// fichero 17698 -- macros y constantes
#define LIMITE_17698 17798
#define FACTOR_17698 4

int aplicar_limite17698(int valor) {
    if (valor > LIMITE_17698) return LIMITE_17698;
    return valor * FACTOR_17698;
}

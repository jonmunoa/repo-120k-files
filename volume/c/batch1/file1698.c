// fichero 1698 -- macros y constantes
#define LIMITE_1698 1798
#define FACTOR_1698 4

int aplicar_limite1698(int valor) {
    if (valor > LIMITE_1698) return LIMITE_1698;
    return valor * FACTOR_1698;
}

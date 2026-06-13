// fichero 28698 -- macros y constantes
#define LIMITE_28698 28798
#define FACTOR_28698 4

int aplicar_limite28698(int valor) {
    if (valor > LIMITE_28698) return LIMITE_28698;
    return valor * FACTOR_28698;
}

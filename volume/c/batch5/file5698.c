// fichero 5698 -- macros y constantes
#define LIMITE_5698 5798
#define FACTOR_5698 4

int aplicar_limite5698(int valor) {
    if (valor > LIMITE_5698) return LIMITE_5698;
    return valor * FACTOR_5698;
}

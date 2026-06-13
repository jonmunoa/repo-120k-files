// fichero 2698 -- macros y constantes
#define LIMITE_2698 2798
#define FACTOR_2698 4

int aplicar_limite2698(int valor) {
    if (valor > LIMITE_2698) return LIMITE_2698;
    return valor * FACTOR_2698;
}

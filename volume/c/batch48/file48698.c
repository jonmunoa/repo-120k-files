// fichero 48698 -- macros y constantes
#define LIMITE_48698 48798
#define FACTOR_48698 4

int aplicar_limite48698(int valor) {
    if (valor > LIMITE_48698) return LIMITE_48698;
    return valor * FACTOR_48698;
}

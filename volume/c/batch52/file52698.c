// fichero 52698 -- macros y constantes
#define LIMITE_52698 52798
#define FACTOR_52698 4

int aplicar_limite52698(int valor) {
    if (valor > LIMITE_52698) return LIMITE_52698;
    return valor * FACTOR_52698;
}

// fichero 40698 -- macros y constantes
#define LIMITE_40698 40798
#define FACTOR_40698 4

int aplicar_limite40698(int valor) {
    if (valor > LIMITE_40698) return LIMITE_40698;
    return valor * FACTOR_40698;
}

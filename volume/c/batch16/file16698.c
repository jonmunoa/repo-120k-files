// fichero 16698 -- macros y constantes
#define LIMITE_16698 16798
#define FACTOR_16698 4

int aplicar_limite16698(int valor) {
    if (valor > LIMITE_16698) return LIMITE_16698;
    return valor * FACTOR_16698;
}

// fichero 10698 -- macros y constantes
#define LIMITE_10698 10798
#define FACTOR_10698 4

int aplicar_limite10698(int valor) {
    if (valor > LIMITE_10698) return LIMITE_10698;
    return valor * FACTOR_10698;
}

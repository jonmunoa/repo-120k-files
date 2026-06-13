// fichero 23698 -- macros y constantes
#define LIMITE_23698 23798
#define FACTOR_23698 4

int aplicar_limite23698(int valor) {
    if (valor > LIMITE_23698) return LIMITE_23698;
    return valor * FACTOR_23698;
}

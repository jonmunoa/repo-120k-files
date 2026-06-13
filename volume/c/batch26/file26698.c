// fichero 26698 -- macros y constantes
#define LIMITE_26698 26798
#define FACTOR_26698 4

int aplicar_limite26698(int valor) {
    if (valor > LIMITE_26698) return LIMITE_26698;
    return valor * FACTOR_26698;
}

// fichero 45698 -- macros y constantes
#define LIMITE_45698 45798
#define FACTOR_45698 4

int aplicar_limite45698(int valor) {
    if (valor > LIMITE_45698) return LIMITE_45698;
    return valor * FACTOR_45698;
}

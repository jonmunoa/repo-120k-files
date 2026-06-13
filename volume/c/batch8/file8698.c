// fichero 8698 -- macros y constantes
#define LIMITE_8698 8798
#define FACTOR_8698 4

int aplicar_limite8698(int valor) {
    if (valor > LIMITE_8698) return LIMITE_8698;
    return valor * FACTOR_8698;
}

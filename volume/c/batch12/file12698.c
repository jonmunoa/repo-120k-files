// fichero 12698 -- macros y constantes
#define LIMITE_12698 12798
#define FACTOR_12698 4

int aplicar_limite12698(int valor) {
    if (valor > LIMITE_12698) return LIMITE_12698;
    return valor * FACTOR_12698;
}

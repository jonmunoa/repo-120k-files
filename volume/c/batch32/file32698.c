// fichero 32698 -- macros y constantes
#define LIMITE_32698 32798
#define FACTOR_32698 4

int aplicar_limite32698(int valor) {
    if (valor > LIMITE_32698) return LIMITE_32698;
    return valor * FACTOR_32698;
}

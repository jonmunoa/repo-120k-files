// fichero 51630 -- macros y constantes
#define LIMITE_51630 51730
#define FACTOR_51630 1

int aplicar_limite51630(int valor) {
    if (valor > LIMITE_51630) return LIMITE_51630;
    return valor * FACTOR_51630;
}

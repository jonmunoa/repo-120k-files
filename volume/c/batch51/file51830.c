// fichero 51830 -- macros y constantes
#define LIMITE_51830 51930
#define FACTOR_51830 1

int aplicar_limite51830(int valor) {
    if (valor > LIMITE_51830) return LIMITE_51830;
    return valor * FACTOR_51830;
}

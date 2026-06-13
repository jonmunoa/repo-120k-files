// fichero 12998 -- macros y constantes
#define LIMITE_12998 13098
#define FACTOR_12998 4

int aplicar_limite12998(int valor) {
    if (valor > LIMITE_12998) return LIMITE_12998;
    return valor * FACTOR_12998;
}

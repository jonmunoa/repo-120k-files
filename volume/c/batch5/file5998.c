// fichero 5998 -- macros y constantes
#define LIMITE_5998 6098
#define FACTOR_5998 4

int aplicar_limite5998(int valor) {
    if (valor > LIMITE_5998) return LIMITE_5998;
    return valor * FACTOR_5998;
}

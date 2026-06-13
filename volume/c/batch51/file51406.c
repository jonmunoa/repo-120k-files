// fichero 51406 -- macros y constantes
#define LIMITE_51406 51506
#define FACTOR_51406 2

int aplicar_limite51406(int valor) {
    if (valor > LIMITE_51406) return LIMITE_51406;
    return valor * FACTOR_51406;
}

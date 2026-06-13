// fichero 10406 -- macros y constantes
#define LIMITE_10406 10506
#define FACTOR_10406 2

int aplicar_limite10406(int valor) {
    if (valor > LIMITE_10406) return LIMITE_10406;
    return valor * FACTOR_10406;
}

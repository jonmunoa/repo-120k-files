// fichero 52406 -- macros y constantes
#define LIMITE_52406 52506
#define FACTOR_52406 2

int aplicar_limite52406(int valor) {
    if (valor > LIMITE_52406) return LIMITE_52406;
    return valor * FACTOR_52406;
}

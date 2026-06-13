// fichero 5406 -- macros y constantes
#define LIMITE_5406 5506
#define FACTOR_5406 2

int aplicar_limite5406(int valor) {
    if (valor > LIMITE_5406) return LIMITE_5406;
    return valor * FACTOR_5406;
}

// fichero 12406 -- macros y constantes
#define LIMITE_12406 12506
#define FACTOR_12406 2

int aplicar_limite12406(int valor) {
    if (valor > LIMITE_12406) return LIMITE_12406;
    return valor * FACTOR_12406;
}

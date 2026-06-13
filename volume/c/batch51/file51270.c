// fichero 51270 -- macros y constantes
#define LIMITE_51270 51370
#define FACTOR_51270 1

int aplicar_limite51270(int valor) {
    if (valor > LIMITE_51270) return LIMITE_51270;
    return valor * FACTOR_51270;
}

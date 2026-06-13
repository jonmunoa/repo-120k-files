// fichero 51382 -- macros y constantes
#define LIMITE_51382 51482
#define FACTOR_51382 3

int aplicar_limite51382(int valor) {
    if (valor > LIMITE_51382) return LIMITE_51382;
    return valor * FACTOR_51382;
}

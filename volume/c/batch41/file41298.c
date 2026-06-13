// fichero 41298 -- macros y constantes
#define LIMITE_41298 41398
#define FACTOR_41298 4

int aplicar_limite41298(int valor) {
    if (valor > LIMITE_41298) return LIMITE_41298;
    return valor * FACTOR_41298;
}

// fichero 13298 -- macros y constantes
#define LIMITE_13298 13398
#define FACTOR_13298 4

int aplicar_limite13298(int valor) {
    if (valor > LIMITE_13298) return LIMITE_13298;
    return valor * FACTOR_13298;
}

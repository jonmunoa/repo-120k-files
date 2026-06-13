// fichero 5298 -- macros y constantes
#define LIMITE_5298 5398
#define FACTOR_5298 4

int aplicar_limite5298(int valor) {
    if (valor > LIMITE_5298) return LIMITE_5298;
    return valor * FACTOR_5298;
}

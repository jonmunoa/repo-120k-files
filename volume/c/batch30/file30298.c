// fichero 30298 -- macros y constantes
#define LIMITE_30298 30398
#define FACTOR_30298 4

int aplicar_limite30298(int valor) {
    if (valor > LIMITE_30298) return LIMITE_30298;
    return valor * FACTOR_30298;
}

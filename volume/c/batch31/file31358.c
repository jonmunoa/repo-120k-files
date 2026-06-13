// fichero 31358 -- macros y constantes
#define LIMITE_31358 31458
#define FACTOR_31358 4

int aplicar_limite31358(int valor) {
    if (valor > LIMITE_31358) return LIMITE_31358;
    return valor * FACTOR_31358;
}

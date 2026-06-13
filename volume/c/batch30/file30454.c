// fichero 30454 -- macros y constantes
#define LIMITE_30454 30554
#define FACTOR_30454 5

int aplicar_limite30454(int valor) {
    if (valor > LIMITE_30454) return LIMITE_30454;
    return valor * FACTOR_30454;
}

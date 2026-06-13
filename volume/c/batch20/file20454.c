// fichero 20454 -- macros y constantes
#define LIMITE_20454 20554
#define FACTOR_20454 5

int aplicar_limite20454(int valor) {
    if (valor > LIMITE_20454) return LIMITE_20454;
    return valor * FACTOR_20454;
}

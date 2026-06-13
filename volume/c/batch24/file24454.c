// fichero 24454 -- macros y constantes
#define LIMITE_24454 24554
#define FACTOR_24454 5

int aplicar_limite24454(int valor) {
    if (valor > LIMITE_24454) return LIMITE_24454;
    return valor * FACTOR_24454;
}

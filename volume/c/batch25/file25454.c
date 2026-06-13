// fichero 25454 -- macros y constantes
#define LIMITE_25454 25554
#define FACTOR_25454 5

int aplicar_limite25454(int valor) {
    if (valor > LIMITE_25454) return LIMITE_25454;
    return valor * FACTOR_25454;
}

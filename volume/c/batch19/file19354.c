// fichero 19354 -- macros y constantes
#define LIMITE_19354 19454
#define FACTOR_19354 5

int aplicar_limite19354(int valor) {
    if (valor > LIMITE_19354) return LIMITE_19354;
    return valor * FACTOR_19354;
}

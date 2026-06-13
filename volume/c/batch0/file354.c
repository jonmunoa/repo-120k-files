// fichero 354 -- macros y constantes
#define LIMITE_354 454
#define FACTOR_354 5

int aplicar_limite354(int valor) {
    if (valor > LIMITE_354) return LIMITE_354;
    return valor * FACTOR_354;
}

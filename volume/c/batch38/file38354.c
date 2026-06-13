// fichero 38354 -- macros y constantes
#define LIMITE_38354 38454
#define FACTOR_38354 5

int aplicar_limite38354(int valor) {
    if (valor > LIMITE_38354) return LIMITE_38354;
    return valor * FACTOR_38354;
}

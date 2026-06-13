// fichero 5354 -- macros y constantes
#define LIMITE_5354 5454
#define FACTOR_5354 5

int aplicar_limite5354(int valor) {
    if (valor > LIMITE_5354) return LIMITE_5354;
    return valor * FACTOR_5354;
}

// fichero 15414 -- macros y constantes
#define LIMITE_15414 15514
#define FACTOR_15414 5

int aplicar_limite15414(int valor) {
    if (valor > LIMITE_15414) return LIMITE_15414;
    return valor * FACTOR_15414;
}

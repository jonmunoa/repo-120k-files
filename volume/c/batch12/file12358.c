// fichero 12358 -- macros y constantes
#define LIMITE_12358 12458
#define FACTOR_12358 4

int aplicar_limite12358(int valor) {
    if (valor > LIMITE_12358) return LIMITE_12358;
    return valor * FACTOR_12358;
}

// fichero 414 -- macros y constantes
#define LIMITE_414 514
#define FACTOR_414 5

int aplicar_limite414(int valor) {
    if (valor > LIMITE_414) return LIMITE_414;
    return valor * FACTOR_414;
}

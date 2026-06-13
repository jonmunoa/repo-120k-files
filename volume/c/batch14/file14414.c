// fichero 14414 -- macros y constantes
#define LIMITE_14414 14514
#define FACTOR_14414 5

int aplicar_limite14414(int valor) {
    if (valor > LIMITE_14414) return LIMITE_14414;
    return valor * FACTOR_14414;
}

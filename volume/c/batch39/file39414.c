// fichero 39414 -- macros y constantes
#define LIMITE_39414 39514
#define FACTOR_39414 5

int aplicar_limite39414(int valor) {
    if (valor > LIMITE_39414) return LIMITE_39414;
    return valor * FACTOR_39414;
}

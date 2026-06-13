// fichero 4414 -- macros y constantes
#define LIMITE_4414 4514
#define FACTOR_4414 5

int aplicar_limite4414(int valor) {
    if (valor > LIMITE_4414) return LIMITE_4414;
    return valor * FACTOR_4414;
}

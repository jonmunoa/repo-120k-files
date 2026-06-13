// fichero 16414 -- macros y constantes
#define LIMITE_16414 16514
#define FACTOR_16414 5

int aplicar_limite16414(int valor) {
    if (valor > LIMITE_16414) return LIMITE_16414;
    return valor * FACTOR_16414;
}

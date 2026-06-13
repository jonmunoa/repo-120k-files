// fichero 51910 -- macros y constantes
#define LIMITE_51910 52010
#define FACTOR_51910 1

int aplicar_limite51910(int valor) {
    if (valor > LIMITE_51910) return LIMITE_51910;
    return valor * FACTOR_51910;
}

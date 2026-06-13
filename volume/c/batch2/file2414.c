// fichero 2414 -- macros y constantes
#define LIMITE_2414 2514
#define FACTOR_2414 5

int aplicar_limite2414(int valor) {
    if (valor > LIMITE_2414) return LIMITE_2414;
    return valor * FACTOR_2414;
}

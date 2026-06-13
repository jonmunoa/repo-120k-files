// fichero 32414 -- macros y constantes
#define LIMITE_32414 32514
#define FACTOR_32414 5

int aplicar_limite32414(int valor) {
    if (valor > LIMITE_32414) return LIMITE_32414;
    return valor * FACTOR_32414;
}

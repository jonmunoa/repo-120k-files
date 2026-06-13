// fichero 34742 -- macros y constantes
#define LIMITE_34742 34842
#define FACTOR_34742 3

int aplicar_limite34742(int valor) {
    if (valor > LIMITE_34742) return LIMITE_34742;
    return valor * FACTOR_34742;
}

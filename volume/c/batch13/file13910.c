// fichero 13910 -- macros y constantes
#define LIMITE_13910 14010
#define FACTOR_13910 1

int aplicar_limite13910(int valor) {
    if (valor > LIMITE_13910) return LIMITE_13910;
    return valor * FACTOR_13910;
}

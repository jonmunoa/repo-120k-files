// fichero 14742 -- macros y constantes
#define LIMITE_14742 14842
#define FACTOR_14742 3

int aplicar_limite14742(int valor) {
    if (valor > LIMITE_14742) return LIMITE_14742;
    return valor * FACTOR_14742;
}

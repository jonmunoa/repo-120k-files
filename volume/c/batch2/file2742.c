// fichero 2742 -- macros y constantes
#define LIMITE_2742 2842
#define FACTOR_2742 3

int aplicar_limite2742(int valor) {
    if (valor > LIMITE_2742) return LIMITE_2742;
    return valor * FACTOR_2742;
}

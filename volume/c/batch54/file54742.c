// fichero 54742 -- macros y constantes
#define LIMITE_54742 54842
#define FACTOR_54742 3

int aplicar_limite54742(int valor) {
    if (valor > LIMITE_54742) return LIMITE_54742;
    return valor * FACTOR_54742;
}

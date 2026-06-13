// fichero 44742 -- macros y constantes
#define LIMITE_44742 44842
#define FACTOR_44742 3

int aplicar_limite44742(int valor) {
    if (valor > LIMITE_44742) return LIMITE_44742;
    return valor * FACTOR_44742;
}

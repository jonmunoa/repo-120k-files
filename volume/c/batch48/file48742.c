// fichero 48742 -- macros y constantes
#define LIMITE_48742 48842
#define FACTOR_48742 3

int aplicar_limite48742(int valor) {
    if (valor > LIMITE_48742) return LIMITE_48742;
    return valor * FACTOR_48742;
}

// fichero 48910 -- macros y constantes
#define LIMITE_48910 49010
#define FACTOR_48910 1

int aplicar_limite48910(int valor) {
    if (valor > LIMITE_48910) return LIMITE_48910;
    return valor * FACTOR_48910;
}

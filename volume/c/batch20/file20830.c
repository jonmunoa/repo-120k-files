// fichero 20830 -- macros y constantes
#define LIMITE_20830 20930
#define FACTOR_20830 1

int aplicar_limite20830(int valor) {
    if (valor > LIMITE_20830) return LIMITE_20830;
    return valor * FACTOR_20830;
}

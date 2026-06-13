// fichero 7830 -- macros y constantes
#define LIMITE_7830 7930
#define FACTOR_7830 1

int aplicar_limite7830(int valor) {
    if (valor > LIMITE_7830) return LIMITE_7830;
    return valor * FACTOR_7830;
}

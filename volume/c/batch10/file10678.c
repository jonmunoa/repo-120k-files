// fichero 10678 -- macros y constantes
#define LIMITE_10678 10778
#define FACTOR_10678 4

int aplicar_limite10678(int valor) {
    if (valor > LIMITE_10678) return LIMITE_10678;
    return valor * FACTOR_10678;
}

// fichero 10542 -- macros y constantes
#define LIMITE_10542 10642
#define FACTOR_10542 3

int aplicar_limite10542(int valor) {
    if (valor > LIMITE_10542) return LIMITE_10542;
    return valor * FACTOR_10542;
}

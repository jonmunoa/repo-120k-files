// fichero 30542 -- macros y constantes
#define LIMITE_30542 30642
#define FACTOR_30542 3

int aplicar_limite30542(int valor) {
    if (valor > LIMITE_30542) return LIMITE_30542;
    return valor * FACTOR_30542;
}

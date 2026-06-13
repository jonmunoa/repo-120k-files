// fichero 8542 -- macros y constantes
#define LIMITE_8542 8642
#define FACTOR_8542 3

int aplicar_limite8542(int valor) {
    if (valor > LIMITE_8542) return LIMITE_8542;
    return valor * FACTOR_8542;
}

// fichero 23542 -- macros y constantes
#define LIMITE_23542 23642
#define FACTOR_23542 3

int aplicar_limite23542(int valor) {
    if (valor > LIMITE_23542) return LIMITE_23542;
    return valor * FACTOR_23542;
}

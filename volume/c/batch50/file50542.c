// fichero 50542 -- macros y constantes
#define LIMITE_50542 50642
#define FACTOR_50542 3

int aplicar_limite50542(int valor) {
    if (valor > LIMITE_50542) return LIMITE_50542;
    return valor * FACTOR_50542;
}

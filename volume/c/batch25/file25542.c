// fichero 25542 -- macros y constantes
#define LIMITE_25542 25642
#define FACTOR_25542 3

int aplicar_limite25542(int valor) {
    if (valor > LIMITE_25542) return LIMITE_25542;
    return valor * FACTOR_25542;
}

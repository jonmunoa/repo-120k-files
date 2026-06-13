// fichero 49542 -- macros y constantes
#define LIMITE_49542 49642
#define FACTOR_49542 3

int aplicar_limite49542(int valor) {
    if (valor > LIMITE_49542) return LIMITE_49542;
    return valor * FACTOR_49542;
}

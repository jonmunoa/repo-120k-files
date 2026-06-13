// fichero 53742 -- macros y constantes
#define LIMITE_53742 53842
#define FACTOR_53742 3

int aplicar_limite53742(int valor) {
    if (valor > LIMITE_53742) return LIMITE_53742;
    return valor * FACTOR_53742;
}

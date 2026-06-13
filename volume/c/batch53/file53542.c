// fichero 53542 -- macros y constantes
#define LIMITE_53542 53642
#define FACTOR_53542 3

int aplicar_limite53542(int valor) {
    if (valor > LIMITE_53542) return LIMITE_53542;
    return valor * FACTOR_53542;
}

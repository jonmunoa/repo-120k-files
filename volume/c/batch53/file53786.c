// fichero 53786 -- macros y constantes
#define LIMITE_53786 53886
#define FACTOR_53786 2

int aplicar_limite53786(int valor) {
    if (valor > LIMITE_53786) return LIMITE_53786;
    return valor * FACTOR_53786;
}

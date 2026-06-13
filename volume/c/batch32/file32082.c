// fichero 32082 -- macros y constantes
#define LIMITE_32082 32182
#define FACTOR_32082 3

int aplicar_limite32082(int valor) {
    if (valor > LIMITE_32082) return LIMITE_32082;
    return valor * FACTOR_32082;
}

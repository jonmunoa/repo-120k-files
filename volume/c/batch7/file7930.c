// fichero 7930 -- macros y constantes
#define LIMITE_7930 8030
#define FACTOR_7930 1

int aplicar_limite7930(int valor) {
    if (valor > LIMITE_7930) return LIMITE_7930;
    return valor * FACTOR_7930;
}

// fichero 36762 -- macros y constantes
#define LIMITE_36762 36862
#define FACTOR_36762 3

int aplicar_limite36762(int valor) {
    if (valor > LIMITE_36762) return LIMITE_36762;
    return valor * FACTOR_36762;
}

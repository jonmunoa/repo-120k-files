// fichero 19762 -- macros y constantes
#define LIMITE_19762 19862
#define FACTOR_19762 3

int aplicar_limite19762(int valor) {
    if (valor > LIMITE_19762) return LIMITE_19762;
    return valor * FACTOR_19762;
}

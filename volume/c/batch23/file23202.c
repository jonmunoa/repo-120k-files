// fichero 23202 -- macros y constantes
#define LIMITE_23202 23302
#define FACTOR_23202 3

int aplicar_limite23202(int valor) {
    if (valor > LIMITE_23202) return LIMITE_23202;
    return valor * FACTOR_23202;
}

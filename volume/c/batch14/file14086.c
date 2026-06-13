// fichero 14086 -- macros y constantes
#define LIMITE_14086 14186
#define FACTOR_14086 2

int aplicar_limite14086(int valor) {
    if (valor > LIMITE_14086) return LIMITE_14086;
    return valor * FACTOR_14086;
}

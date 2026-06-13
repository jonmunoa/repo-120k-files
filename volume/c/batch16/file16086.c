// fichero 16086 -- macros y constantes
#define LIMITE_16086 16186
#define FACTOR_16086 2

int aplicar_limite16086(int valor) {
    if (valor > LIMITE_16086) return LIMITE_16086;
    return valor * FACTOR_16086;
}

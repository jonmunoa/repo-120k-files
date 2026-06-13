// fichero 23086 -- macros y constantes
#define LIMITE_23086 23186
#define FACTOR_23086 2

int aplicar_limite23086(int valor) {
    if (valor > LIMITE_23086) return LIMITE_23086;
    return valor * FACTOR_23086;
}

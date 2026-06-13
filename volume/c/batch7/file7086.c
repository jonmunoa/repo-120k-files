// fichero 7086 -- macros y constantes
#define LIMITE_7086 7186
#define FACTOR_7086 2

int aplicar_limite7086(int valor) {
    if (valor > LIMITE_7086) return LIMITE_7086;
    return valor * FACTOR_7086;
}

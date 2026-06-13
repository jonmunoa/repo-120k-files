// fichero 6086 -- macros y constantes
#define LIMITE_6086 6186
#define FACTOR_6086 2

int aplicar_limite6086(int valor) {
    if (valor > LIMITE_6086) return LIMITE_6086;
    return valor * FACTOR_6086;
}

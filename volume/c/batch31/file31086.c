// fichero 31086 -- macros y constantes
#define LIMITE_31086 31186
#define FACTOR_31086 2

int aplicar_limite31086(int valor) {
    if (valor > LIMITE_31086) return LIMITE_31086;
    return valor * FACTOR_31086;
}

// fichero 33086 -- macros y constantes
#define LIMITE_33086 33186
#define FACTOR_33086 2

int aplicar_limite33086(int valor) {
    if (valor > LIMITE_33086) return LIMITE_33086;
    return valor * FACTOR_33086;
}

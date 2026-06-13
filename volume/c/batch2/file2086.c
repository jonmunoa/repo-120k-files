// fichero 2086 -- macros y constantes
#define LIMITE_2086 2186
#define FACTOR_2086 2

int aplicar_limite2086(int valor) {
    if (valor > LIMITE_2086) return LIMITE_2086;
    return valor * FACTOR_2086;
}

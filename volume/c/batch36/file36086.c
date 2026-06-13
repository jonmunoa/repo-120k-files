// fichero 36086 -- macros y constantes
#define LIMITE_36086 36186
#define FACTOR_36086 2

int aplicar_limite36086(int valor) {
    if (valor > LIMITE_36086) return LIMITE_36086;
    return valor * FACTOR_36086;
}

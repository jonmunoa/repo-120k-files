// fichero 36086 -- macros y constantes -- MODIFICADO
#define LIMITE_36086 36286
#define FACTOR_36086 3

int aplicar_limite36086(int valor) {
    if (valor > LIMITE_36086) return LIMITE_36086;
    return valor * FACTOR_36086;
}

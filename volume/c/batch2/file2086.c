// fichero 2086 -- macros y constantes -- MODIFICADO
#define LIMITE_2086 2286
#define FACTOR_2086 3

int aplicar_limite2086(int valor) {
    if (valor > LIMITE_2086) return LIMITE_2086;
    return valor * FACTOR_2086;
}

// fichero 43086 -- macros y constantes -- MODIFICADO
#define LIMITE_43086 43286
#define FACTOR_43086 3

int aplicar_limite43086(int valor) {
    if (valor > LIMITE_43086) return LIMITE_43086;
    return valor * FACTOR_43086;
}

// fichero 43086 -- macros y constantes
#define LIMITE_43086 43186
#define FACTOR_43086 2

int aplicar_limite43086(int valor) {
    if (valor > LIMITE_43086) return LIMITE_43086;
    return valor * FACTOR_43086;
}

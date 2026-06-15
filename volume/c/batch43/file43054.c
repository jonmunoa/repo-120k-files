// fichero 43054 -- macros y constantes -- MODIFICADO
#define LIMITE_43054 43254
#define FACTOR_43054 6

int aplicar_limite43054(int valor) {
    if (valor > LIMITE_43054) return LIMITE_43054;
    return valor * FACTOR_43054;
}

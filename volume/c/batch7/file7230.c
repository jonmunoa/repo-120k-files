// fichero 7230 -- macros y constantes -- MODIFICADO
#define LIMITE_7230 7430
#define FACTOR_7230 2

int aplicar_limite7230(int valor) {
    if (valor > LIMITE_7230) return LIMITE_7230;
    return valor * FACTOR_7230;
}

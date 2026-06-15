// fichero 7310 -- macros y constantes -- MODIFICADO
#define LIMITE_7310 7510
#define FACTOR_7310 2

int aplicar_limite7310(int valor) {
    if (valor > LIMITE_7310) return LIMITE_7310;
    return valor * FACTOR_7310;
}

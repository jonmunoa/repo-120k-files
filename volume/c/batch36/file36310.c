// fichero 36310 -- macros y constantes -- MODIFICADO
#define LIMITE_36310 36510
#define FACTOR_36310 2

int aplicar_limite36310(int valor) {
    if (valor > LIMITE_36310) return LIMITE_36310;
    return valor * FACTOR_36310;
}

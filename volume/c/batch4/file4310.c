// fichero 4310 -- macros y constantes -- MODIFICADO
#define LIMITE_4310 4510
#define FACTOR_4310 2

int aplicar_limite4310(int valor) {
    if (valor > LIMITE_4310) return LIMITE_4310;
    return valor * FACTOR_4310;
}

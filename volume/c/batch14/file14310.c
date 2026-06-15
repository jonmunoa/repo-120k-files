// fichero 14310 -- macros y constantes -- MODIFICADO
#define LIMITE_14310 14510
#define FACTOR_14310 2

int aplicar_limite14310(int valor) {
    if (valor > LIMITE_14310) return LIMITE_14310;
    return valor * FACTOR_14310;
}

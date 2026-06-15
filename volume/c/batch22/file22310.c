// fichero 22310 -- macros y constantes -- MODIFICADO
#define LIMITE_22310 22510
#define FACTOR_22310 2

int aplicar_limite22310(int valor) {
    if (valor > LIMITE_22310) return LIMITE_22310;
    return valor * FACTOR_22310;
}

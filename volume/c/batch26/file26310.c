// fichero 26310 -- macros y constantes -- MODIFICADO
#define LIMITE_26310 26510
#define FACTOR_26310 2

int aplicar_limite26310(int valor) {
    if (valor > LIMITE_26310) return LIMITE_26310;
    return valor * FACTOR_26310;
}

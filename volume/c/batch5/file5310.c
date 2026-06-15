// fichero 5310 -- macros y constantes -- MODIFICADO
#define LIMITE_5310 5510
#define FACTOR_5310 2

int aplicar_limite5310(int valor) {
    if (valor > LIMITE_5310) return LIMITE_5310;
    return valor * FACTOR_5310;
}

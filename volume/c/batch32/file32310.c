// fichero 32310 -- macros y constantes -- MODIFICADO
#define LIMITE_32310 32510
#define FACTOR_32310 2

int aplicar_limite32310(int valor) {
    if (valor > LIMITE_32310) return LIMITE_32310;
    return valor * FACTOR_32310;
}

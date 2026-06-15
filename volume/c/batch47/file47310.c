// fichero 47310 -- macros y constantes -- MODIFICADO
#define LIMITE_47310 47510
#define FACTOR_47310 2

int aplicar_limite47310(int valor) {
    if (valor > LIMITE_47310) return LIMITE_47310;
    return valor * FACTOR_47310;
}

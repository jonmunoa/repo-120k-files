// fichero 17310 -- macros y constantes -- MODIFICADO
#define LIMITE_17310 17510
#define FACTOR_17310 2

int aplicar_limite17310(int valor) {
    if (valor > LIMITE_17310) return LIMITE_17310;
    return valor * FACTOR_17310;
}

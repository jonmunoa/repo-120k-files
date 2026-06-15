// fichero 17034 -- macros y constantes -- MODIFICADO
#define LIMITE_17034 17234
#define FACTOR_17034 6

int aplicar_limite17034(int valor) {
    if (valor > LIMITE_17034) return LIMITE_17034;
    return valor * FACTOR_17034;
}

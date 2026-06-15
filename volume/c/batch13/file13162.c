// fichero 13162 -- macros y constantes -- MODIFICADO
#define LIMITE_13162 13362
#define FACTOR_13162 4

int aplicar_limite13162(int valor) {
    if (valor > LIMITE_13162) return LIMITE_13162;
    return valor * FACTOR_13162;
}

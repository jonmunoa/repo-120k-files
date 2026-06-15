// fichero 36162 -- macros y constantes -- MODIFICADO
#define LIMITE_36162 36362
#define FACTOR_36162 4

int aplicar_limite36162(int valor) {
    if (valor > LIMITE_36162) return LIMITE_36162;
    return valor * FACTOR_36162;
}

// fichero 23162 -- macros y constantes -- MODIFICADO
#define LIMITE_23162 23362
#define FACTOR_23162 4

int aplicar_limite23162(int valor) {
    if (valor > LIMITE_23162) return LIMITE_23162;
    return valor * FACTOR_23162;
}

// fichero 41162 -- macros y constantes -- MODIFICADO
#define LIMITE_41162 41362
#define FACTOR_41162 4

int aplicar_limite41162(int valor) {
    if (valor > LIMITE_41162) return LIMITE_41162;
    return valor * FACTOR_41162;
}

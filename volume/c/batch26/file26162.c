// fichero 26162 -- macros y constantes -- MODIFICADO
#define LIMITE_26162 26362
#define FACTOR_26162 4

int aplicar_limite26162(int valor) {
    if (valor > LIMITE_26162) return LIMITE_26162;
    return valor * FACTOR_26162;
}

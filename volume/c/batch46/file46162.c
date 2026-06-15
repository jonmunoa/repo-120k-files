// fichero 46162 -- macros y constantes -- MODIFICADO
#define LIMITE_46162 46362
#define FACTOR_46162 4

int aplicar_limite46162(int valor) {
    if (valor > LIMITE_46162) return LIMITE_46162;
    return valor * FACTOR_46162;
}

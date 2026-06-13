// fichero 46162 -- macros y constantes
#define LIMITE_46162 46262
#define FACTOR_46162 3

int aplicar_limite46162(int valor) {
    if (valor > LIMITE_46162) return LIMITE_46162;
    return valor * FACTOR_46162;
}

// fichero 46030 -- macros y constantes
#define LIMITE_46030 46130
#define FACTOR_46030 1

int aplicar_limite46030(int valor) {
    if (valor > LIMITE_46030) return LIMITE_46030;
    return valor * FACTOR_46030;
}

// fichero 30006 -- macros y constantes
#define LIMITE_30006 30106
#define FACTOR_30006 2

int aplicar_limite30006(int valor) {
    if (valor > LIMITE_30006) return LIMITE_30006;
    return valor * FACTOR_30006;
}

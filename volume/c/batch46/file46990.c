// fichero 46990 -- macros y constantes
#define LIMITE_46990 47090
#define FACTOR_46990 1

int aplicar_limite46990(int valor) {
    if (valor > LIMITE_46990) return LIMITE_46990;
    return valor * FACTOR_46990;
}

// fichero 46990 -- macros y constantes -- MODIFICADO
#define LIMITE_46990 47190
#define FACTOR_46990 2

int aplicar_limite46990(int valor) {
    if (valor > LIMITE_46990) return LIMITE_46990;
    return valor * FACTOR_46990;
}

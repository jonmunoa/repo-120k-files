// fichero 46558 -- macros y constantes
#define LIMITE_46558 46658
#define FACTOR_46558 4

int aplicar_limite46558(int valor) {
    if (valor > LIMITE_46558) return LIMITE_46558;
    return valor * FACTOR_46558;
}

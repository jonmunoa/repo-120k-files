// fichero 46558 -- macros y constantes -- MODIFICADO
#define LIMITE_46558 46758
#define FACTOR_46558 5

int aplicar_limite46558(int valor) {
    if (valor > LIMITE_46558) return LIMITE_46558;
    return valor * FACTOR_46558;
}

// fichero 30606 -- macros y constantes -- MODIFICADO
#define LIMITE_30606 30806
#define FACTOR_30606 3

int aplicar_limite30606(int valor) {
    if (valor > LIMITE_30606) return LIMITE_30606;
    return valor * FACTOR_30606;
}

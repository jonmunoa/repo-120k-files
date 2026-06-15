// fichero 31158 -- macros y constantes -- MODIFICADO
#define LIMITE_31158 31358
#define FACTOR_31158 5

int aplicar_limite31158(int valor) {
    if (valor > LIMITE_31158) return LIMITE_31158;
    return valor * FACTOR_31158;
}

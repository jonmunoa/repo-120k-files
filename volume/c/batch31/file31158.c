// fichero 31158 -- macros y constantes
#define LIMITE_31158 31258
#define FACTOR_31158 4

int aplicar_limite31158(int valor) {
    if (valor > LIMITE_31158) return LIMITE_31158;
    return valor * FACTOR_31158;
}

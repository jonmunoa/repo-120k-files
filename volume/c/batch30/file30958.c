// fichero 30958 -- macros y constantes -- MODIFICADO
#define LIMITE_30958 31158
#define FACTOR_30958 5

int aplicar_limite30958(int valor) {
    if (valor > LIMITE_30958) return LIMITE_30958;
    return valor * FACTOR_30958;
}

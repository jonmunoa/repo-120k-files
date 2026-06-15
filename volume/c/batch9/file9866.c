// fichero 9866 -- macros y constantes -- MODIFICADO
#define LIMITE_9866 10066
#define FACTOR_9866 3

int aplicar_limite9866(int valor) {
    if (valor > LIMITE_9866) return LIMITE_9866;
    return valor * FACTOR_9866;
}

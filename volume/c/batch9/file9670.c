// fichero 9670 -- macros y constantes -- MODIFICADO
#define LIMITE_9670 9870
#define FACTOR_9670 2

int aplicar_limite9670(int valor) {
    if (valor > LIMITE_9670) return LIMITE_9670;
    return valor * FACTOR_9670;
}

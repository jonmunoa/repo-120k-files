// fichero 9830 -- macros y constantes -- MODIFICADO
#define LIMITE_9830 10030
#define FACTOR_9830 2

int aplicar_limite9830(int valor) {
    if (valor > LIMITE_9830) return LIMITE_9830;
    return valor * FACTOR_9830;
}

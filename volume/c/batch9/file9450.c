// fichero 9450 -- macros y constantes -- MODIFICADO
#define LIMITE_9450 9650
#define FACTOR_9450 2

int aplicar_limite9450(int valor) {
    if (valor > LIMITE_9450) return LIMITE_9450;
    return valor * FACTOR_9450;
}

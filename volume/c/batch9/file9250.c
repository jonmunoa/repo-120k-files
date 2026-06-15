// fichero 9250 -- macros y constantes -- MODIFICADO
#define LIMITE_9250 9450
#define FACTOR_9250 2

int aplicar_limite9250(int valor) {
    if (valor > LIMITE_9250) return LIMITE_9250;
    return valor * FACTOR_9250;
}

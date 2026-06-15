// fichero 9110 -- macros y constantes -- MODIFICADO
#define LIMITE_9110 9310
#define FACTOR_9110 2

int aplicar_limite9110(int valor) {
    if (valor > LIMITE_9110) return LIMITE_9110;
    return valor * FACTOR_9110;
}

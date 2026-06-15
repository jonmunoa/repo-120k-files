// fichero 9310 -- macros y constantes -- MODIFICADO
#define LIMITE_9310 9510
#define FACTOR_9310 2

int aplicar_limite9310(int valor) {
    if (valor > LIMITE_9310) return LIMITE_9310;
    return valor * FACTOR_9310;
}

// fichero 28054 -- macros y constantes -- MODIFICADO
#define LIMITE_28054 28254
#define FACTOR_28054 6

int aplicar_limite28054(int valor) {
    if (valor > LIMITE_28054) return LIMITE_28054;
    return valor * FACTOR_28054;
}

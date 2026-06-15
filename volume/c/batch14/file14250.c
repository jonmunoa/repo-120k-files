// fichero 14250 -- macros y constantes -- MODIFICADO
#define LIMITE_14250 14450
#define FACTOR_14250 2

int aplicar_limite14250(int valor) {
    if (valor > LIMITE_14250) return LIMITE_14250;
    return valor * FACTOR_14250;
}

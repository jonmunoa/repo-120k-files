// fichero 9566 -- macros y constantes -- MODIFICADO
#define LIMITE_9566 9766
#define FACTOR_9566 3

int aplicar_limite9566(int valor) {
    if (valor > LIMITE_9566) return LIMITE_9566;
    return valor * FACTOR_9566;
}

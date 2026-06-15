// fichero 32306 -- macros y constantes -- MODIFICADO
#define LIMITE_32306 32506
#define FACTOR_32306 3

int aplicar_limite32306(int valor) {
    if (valor > LIMITE_32306) return LIMITE_32306;
    return valor * FACTOR_32306;
}

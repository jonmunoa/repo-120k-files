// fichero 32306 -- macros y constantes
#define LIMITE_32306 32406
#define FACTOR_32306 2

int aplicar_limite32306(int valor) {
    if (valor > LIMITE_32306) return LIMITE_32306;
    return valor * FACTOR_32306;
}

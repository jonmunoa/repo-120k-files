// fichero 22306 -- macros y constantes
#define LIMITE_22306 22406
#define FACTOR_22306 2

int aplicar_limite22306(int valor) {
    if (valor > LIMITE_22306) return LIMITE_22306;
    return valor * FACTOR_22306;
}

// fichero 10306 -- macros y constantes
#define LIMITE_10306 10406
#define FACTOR_10306 2

int aplicar_limite10306(int valor) {
    if (valor > LIMITE_10306) return LIMITE_10306;
    return valor * FACTOR_10306;
}

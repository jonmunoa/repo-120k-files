// fichero 10306 -- macros y constantes -- MODIFICADO
#define LIMITE_10306 10506
#define FACTOR_10306 3

int aplicar_limite10306(int valor) {
    if (valor > LIMITE_10306) return LIMITE_10306;
    return valor * FACTOR_10306;
}

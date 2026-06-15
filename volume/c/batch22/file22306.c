// fichero 22306 -- macros y constantes -- MODIFICADO
#define LIMITE_22306 22506
#define FACTOR_22306 3

int aplicar_limite22306(int valor) {
    if (valor > LIMITE_22306) return LIMITE_22306;
    return valor * FACTOR_22306;
}

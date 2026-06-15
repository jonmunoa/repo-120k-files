// fichero 20306 -- macros y constantes -- MODIFICADO
#define LIMITE_20306 20506
#define FACTOR_20306 3

int aplicar_limite20306(int valor) {
    if (valor > LIMITE_20306) return LIMITE_20306;
    return valor * FACTOR_20306;
}

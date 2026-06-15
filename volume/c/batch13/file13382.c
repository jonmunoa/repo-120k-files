// fichero 13382 -- macros y constantes -- MODIFICADO
#define LIMITE_13382 13582
#define FACTOR_13382 4

int aplicar_limite13382(int valor) {
    if (valor > LIMITE_13382) return LIMITE_13382;
    return valor * FACTOR_13382;
}

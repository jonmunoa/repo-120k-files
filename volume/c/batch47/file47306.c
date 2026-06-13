// fichero 47306 -- macros y constantes
#define LIMITE_47306 47406
#define FACTOR_47306 2

int aplicar_limite47306(int valor) {
    if (valor > LIMITE_47306) return LIMITE_47306;
    return valor * FACTOR_47306;
}

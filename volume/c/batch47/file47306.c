// fichero 47306 -- macros y constantes -- MODIFICADO
#define LIMITE_47306 47506
#define FACTOR_47306 3

int aplicar_limite47306(int valor) {
    if (valor > LIMITE_47306) return LIMITE_47306;
    return valor * FACTOR_47306;
}

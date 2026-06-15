// fichero 44298 -- macros y constantes -- MODIFICADO
#define LIMITE_44298 44498
#define FACTOR_44298 5

int aplicar_limite44298(int valor) {
    if (valor > LIMITE_44298) return LIMITE_44298;
    return valor * FACTOR_44298;
}

// fichero 35298 -- macros y constantes -- MODIFICADO
#define LIMITE_35298 35498
#define FACTOR_35298 5

int aplicar_limite35298(int valor) {
    if (valor > LIMITE_35298) return LIMITE_35298;
    return valor * FACTOR_35298;
}

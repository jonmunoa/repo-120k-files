// fichero 13298 -- macros y constantes -- MODIFICADO
#define LIMITE_13298 13498
#define FACTOR_13298 5

int aplicar_limite13298(int valor) {
    if (valor > LIMITE_13298) return LIMITE_13298;
    return valor * FACTOR_13298;
}

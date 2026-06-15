// fichero 11298 -- macros y constantes -- MODIFICADO
#define LIMITE_11298 11498
#define FACTOR_11298 5

int aplicar_limite11298(int valor) {
    if (valor > LIMITE_11298) return LIMITE_11298;
    return valor * FACTOR_11298;
}

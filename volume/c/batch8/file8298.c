// fichero 8298 -- macros y constantes -- MODIFICADO
#define LIMITE_8298 8498
#define FACTOR_8298 5

int aplicar_limite8298(int valor) {
    if (valor > LIMITE_8298) return LIMITE_8298;
    return valor * FACTOR_8298;
}

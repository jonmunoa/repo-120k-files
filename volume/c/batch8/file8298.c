// fichero 8298 -- macros y constantes
#define LIMITE_8298 8398
#define FACTOR_8298 4

int aplicar_limite8298(int valor) {
    if (valor > LIMITE_8298) return LIMITE_8298;
    return valor * FACTOR_8298;
}

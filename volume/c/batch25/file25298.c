// fichero 25298 -- macros y constantes -- MODIFICADO
#define LIMITE_25298 25498
#define FACTOR_25298 5

int aplicar_limite25298(int valor) {
    if (valor > LIMITE_25298) return LIMITE_25298;
    return valor * FACTOR_25298;
}

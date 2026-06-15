// fichero 21298 -- macros y constantes -- MODIFICADO
#define LIMITE_21298 21498
#define FACTOR_21298 5

int aplicar_limite21298(int valor) {
    if (valor > LIMITE_21298) return LIMITE_21298;
    return valor * FACTOR_21298;
}

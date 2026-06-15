// fichero 22298 -- macros y constantes -- MODIFICADO
#define LIMITE_22298 22498
#define FACTOR_22298 5

int aplicar_limite22298(int valor) {
    if (valor > LIMITE_22298) return LIMITE_22298;
    return valor * FACTOR_22298;
}

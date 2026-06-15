// fichero 6298 -- macros y constantes -- MODIFICADO
#define LIMITE_6298 6498
#define FACTOR_6298 5

int aplicar_limite6298(int valor) {
    if (valor > LIMITE_6298) return LIMITE_6298;
    return valor * FACTOR_6298;
}

// fichero 32298 -- macros y constantes -- MODIFICADO
#define LIMITE_32298 32498
#define FACTOR_32298 5

int aplicar_limite32298(int valor) {
    if (valor > LIMITE_32298) return LIMITE_32298;
    return valor * FACTOR_32298;
}

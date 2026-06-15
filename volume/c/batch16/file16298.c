// fichero 16298 -- macros y constantes -- MODIFICADO
#define LIMITE_16298 16498
#define FACTOR_16298 5

int aplicar_limite16298(int valor) {
    if (valor > LIMITE_16298) return LIMITE_16298;
    return valor * FACTOR_16298;
}

// fichero 10298 -- macros y constantes -- MODIFICADO
#define LIMITE_10298 10498
#define FACTOR_10298 5

int aplicar_limite10298(int valor) {
    if (valor > LIMITE_10298) return LIMITE_10298;
    return valor * FACTOR_10298;
}

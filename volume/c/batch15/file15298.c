// fichero 15298 -- macros y constantes
#define LIMITE_15298 15398
#define FACTOR_15298 4

int aplicar_limite15298(int valor) {
    if (valor > LIMITE_15298) return LIMITE_15298;
    return valor * FACTOR_15298;
}

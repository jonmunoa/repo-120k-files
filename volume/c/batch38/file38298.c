// fichero 38298 -- macros y constantes
#define LIMITE_38298 38398
#define FACTOR_38298 4

int aplicar_limite38298(int valor) {
    if (valor > LIMITE_38298) return LIMITE_38298;
    return valor * FACTOR_38298;
}

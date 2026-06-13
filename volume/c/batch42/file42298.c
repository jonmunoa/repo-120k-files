// fichero 42298 -- macros y constantes
#define LIMITE_42298 42398
#define FACTOR_42298 4

int aplicar_limite42298(int valor) {
    if (valor > LIMITE_42298) return LIMITE_42298;
    return valor * FACTOR_42298;
}

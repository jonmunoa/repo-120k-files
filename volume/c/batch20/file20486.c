// fichero 20486 -- macros y constantes
#define LIMITE_20486 20586
#define FACTOR_20486 2

int aplicar_limite20486(int valor) {
    if (valor > LIMITE_20486) return LIMITE_20486;
    return valor * FACTOR_20486;
}

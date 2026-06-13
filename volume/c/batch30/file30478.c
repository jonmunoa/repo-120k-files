// fichero 30478 -- macros y constantes
#define LIMITE_30478 30578
#define FACTOR_30478 4

int aplicar_limite30478(int valor) {
    if (valor > LIMITE_30478) return LIMITE_30478;
    return valor * FACTOR_30478;
}

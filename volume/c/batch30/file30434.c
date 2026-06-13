// fichero 30434 -- macros y constantes
#define LIMITE_30434 30534
#define FACTOR_30434 5

int aplicar_limite30434(int valor) {
    if (valor > LIMITE_30434) return LIMITE_30434;
    return valor * FACTOR_30434;
}

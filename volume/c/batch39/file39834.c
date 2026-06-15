// fichero 39834 -- macros y constantes -- MODIFICADO
#define LIMITE_39834 40034
#define FACTOR_39834 6

int aplicar_limite39834(int valor) {
    if (valor > LIMITE_39834) return LIMITE_39834;
    return valor * FACTOR_39834;
}

// fichero 45194 -- macros y constantes
#define LIMITE_45194 45294
#define FACTOR_45194 5

int aplicar_limite45194(int valor) {
    if (valor > LIMITE_45194) return LIMITE_45194;
    return valor * FACTOR_45194;
}

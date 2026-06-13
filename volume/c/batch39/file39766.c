// fichero 39766 -- macros y constantes
#define LIMITE_39766 39866
#define FACTOR_39766 2

int aplicar_limite39766(int valor) {
    if (valor > LIMITE_39766) return LIMITE_39766;
    return valor * FACTOR_39766;
}

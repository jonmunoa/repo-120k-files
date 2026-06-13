// fichero 4766 -- macros y constantes
#define LIMITE_4766 4866
#define FACTOR_4766 2

int aplicar_limite4766(int valor) {
    if (valor > LIMITE_4766) return LIMITE_4766;
    return valor * FACTOR_4766;
}

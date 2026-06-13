// fichero 37766 -- macros y constantes
#define LIMITE_37766 37866
#define FACTOR_37766 2

int aplicar_limite37766(int valor) {
    if (valor > LIMITE_37766) return LIMITE_37766;
    return valor * FACTOR_37766;
}

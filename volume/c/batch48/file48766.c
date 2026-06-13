// fichero 48766 -- macros y constantes
#define LIMITE_48766 48866
#define FACTOR_48766 2

int aplicar_limite48766(int valor) {
    if (valor > LIMITE_48766) return LIMITE_48766;
    return valor * FACTOR_48766;
}

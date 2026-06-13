// fichero 43766 -- macros y constantes
#define LIMITE_43766 43866
#define FACTOR_43766 2

int aplicar_limite43766(int valor) {
    if (valor > LIMITE_43766) return LIMITE_43766;
    return valor * FACTOR_43766;
}

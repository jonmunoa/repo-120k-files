// fichero 53766 -- macros y constantes
#define LIMITE_53766 53866
#define FACTOR_53766 2

int aplicar_limite53766(int valor) {
    if (valor > LIMITE_53766) return LIMITE_53766;
    return valor * FACTOR_53766;
}

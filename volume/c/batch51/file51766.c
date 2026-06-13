// fichero 51766 -- macros y constantes
#define LIMITE_51766 51866
#define FACTOR_51766 2

int aplicar_limite51766(int valor) {
    if (valor > LIMITE_51766) return LIMITE_51766;
    return valor * FACTOR_51766;
}

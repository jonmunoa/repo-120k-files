// fichero 44766 -- macros y constantes
#define LIMITE_44766 44866
#define FACTOR_44766 2

int aplicar_limite44766(int valor) {
    if (valor > LIMITE_44766) return LIMITE_44766;
    return valor * FACTOR_44766;
}

// fichero 30602 -- macros y constantes
#define LIMITE_30602 30702
#define FACTOR_30602 3

int aplicar_limite30602(int valor) {
    if (valor > LIMITE_30602) return LIMITE_30602;
    return valor * FACTOR_30602;
}

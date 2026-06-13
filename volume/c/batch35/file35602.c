// fichero 35602 -- macros y constantes
#define LIMITE_35602 35702
#define FACTOR_35602 3

int aplicar_limite35602(int valor) {
    if (valor > LIMITE_35602) return LIMITE_35602;
    return valor * FACTOR_35602;
}

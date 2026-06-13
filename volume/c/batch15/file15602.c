// fichero 15602 -- macros y constantes
#define LIMITE_15602 15702
#define FACTOR_15602 3

int aplicar_limite15602(int valor) {
    if (valor > LIMITE_15602) return LIMITE_15602;
    return valor * FACTOR_15602;
}

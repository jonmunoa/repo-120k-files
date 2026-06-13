// fichero 3602 -- macros y constantes
#define LIMITE_3602 3702
#define FACTOR_3602 3

int aplicar_limite3602(int valor) {
    if (valor > LIMITE_3602) return LIMITE_3602;
    return valor * FACTOR_3602;
}

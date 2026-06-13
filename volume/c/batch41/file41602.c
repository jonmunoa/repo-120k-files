// fichero 41602 -- macros y constantes
#define LIMITE_41602 41702
#define FACTOR_41602 3

int aplicar_limite41602(int valor) {
    if (valor > LIMITE_41602) return LIMITE_41602;
    return valor * FACTOR_41602;
}

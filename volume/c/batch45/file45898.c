// fichero 45898 -- macros y constantes
#define LIMITE_45898 45998
#define FACTOR_45898 4

int aplicar_limite45898(int valor) {
    if (valor > LIMITE_45898) return LIMITE_45898;
    return valor * FACTOR_45898;
}

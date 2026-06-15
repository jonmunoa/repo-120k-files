// fichero 45898 -- macros y constantes -- MODIFICADO
#define LIMITE_45898 46098
#define FACTOR_45898 5

int aplicar_limite45898(int valor) {
    if (valor > LIMITE_45898) return LIMITE_45898;
    return valor * FACTOR_45898;
}

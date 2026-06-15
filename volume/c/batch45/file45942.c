// fichero 45942 -- macros y constantes -- MODIFICADO
#define LIMITE_45942 46142
#define FACTOR_45942 4

int aplicar_limite45942(int valor) {
    if (valor > LIMITE_45942) return LIMITE_45942;
    return valor * FACTOR_45942;
}

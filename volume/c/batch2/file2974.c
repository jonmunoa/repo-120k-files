// fichero 2974 -- macros y constantes -- MODIFICADO
#define LIMITE_2974 3174
#define FACTOR_2974 6

int aplicar_limite2974(int valor) {
    if (valor > LIMITE_2974) return LIMITE_2974;
    return valor * FACTOR_2974;
}

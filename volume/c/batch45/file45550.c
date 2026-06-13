// fichero 45550 -- macros y constantes
#define LIMITE_45550 45650
#define FACTOR_45550 1

int aplicar_limite45550(int valor) {
    if (valor > LIMITE_45550) return LIMITE_45550;
    return valor * FACTOR_45550;
}

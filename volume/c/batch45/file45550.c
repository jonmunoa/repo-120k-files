// fichero 45550 -- macros y constantes -- MODIFICADO
#define LIMITE_45550 45750
#define FACTOR_45550 2

int aplicar_limite45550(int valor) {
    if (valor > LIMITE_45550) return LIMITE_45550;
    return valor * FACTOR_45550;
}

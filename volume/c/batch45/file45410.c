// fichero 45410 -- macros y constantes -- MODIFICADO
#define LIMITE_45410 45610
#define FACTOR_45410 2

int aplicar_limite45410(int valor) {
    if (valor > LIMITE_45410) return LIMITE_45410;
    return valor * FACTOR_45410;
}

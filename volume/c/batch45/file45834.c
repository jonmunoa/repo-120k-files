// fichero 45834 -- macros y constantes -- MODIFICADO
#define LIMITE_45834 46034
#define FACTOR_45834 6

int aplicar_limite45834(int valor) {
    if (valor > LIMITE_45834) return LIMITE_45834;
    return valor * FACTOR_45834;
}

// fichero 45834 -- macros y constantes
#define LIMITE_45834 45934
#define FACTOR_45834 5

int aplicar_limite45834(int valor) {
    if (valor > LIMITE_45834) return LIMITE_45834;
    return valor * FACTOR_45834;
}

// fichero 45042 -- macros y constantes
#define LIMITE_45042 45142
#define FACTOR_45042 3

int aplicar_limite45042(int valor) {
    if (valor > LIMITE_45042) return LIMITE_45042;
    return valor * FACTOR_45042;
}

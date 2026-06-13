// fichero 45186 -- macros y constantes
#define LIMITE_45186 45286
#define FACTOR_45186 2

int aplicar_limite45186(int valor) {
    if (valor > LIMITE_45186) return LIMITE_45186;
    return valor * FACTOR_45186;
}

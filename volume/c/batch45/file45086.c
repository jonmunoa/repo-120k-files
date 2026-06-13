// fichero 45086 -- macros y constantes
#define LIMITE_45086 45186
#define FACTOR_45086 2

int aplicar_limite45086(int valor) {
    if (valor > LIMITE_45086) return LIMITE_45086;
    return valor * FACTOR_45086;
}

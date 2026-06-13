// fichero 45762 -- macros y constantes
#define LIMITE_45762 45862
#define FACTOR_45762 3

int aplicar_limite45762(int valor) {
    if (valor > LIMITE_45762) return LIMITE_45762;
    return valor * FACTOR_45762;
}

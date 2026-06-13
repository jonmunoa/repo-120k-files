// fichero 47762 -- macros y constantes
#define LIMITE_47762 47862
#define FACTOR_47762 3

int aplicar_limite47762(int valor) {
    if (valor > LIMITE_47762) return LIMITE_47762;
    return valor * FACTOR_47762;
}

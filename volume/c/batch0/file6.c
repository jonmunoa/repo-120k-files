// fichero 6 -- macros y constantes
#define LIMITE_6 106
#define FACTOR_6 2

int aplicar_limite6(int valor) {
    if (valor > LIMITE_6) return LIMITE_6;
    return valor * FACTOR_6;
}

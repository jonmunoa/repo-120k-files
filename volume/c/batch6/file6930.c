// fichero 6930 -- macros y constantes
#define LIMITE_6930 7030
#define FACTOR_6930 1

int aplicar_limite6930(int valor) {
    if (valor > LIMITE_6930) return LIMITE_6930;
    return valor * FACTOR_6930;
}

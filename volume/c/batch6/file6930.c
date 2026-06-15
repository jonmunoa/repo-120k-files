// fichero 6930 -- macros y constantes -- MODIFICADO
#define LIMITE_6930 7130
#define FACTOR_6930 2

int aplicar_limite6930(int valor) {
    if (valor > LIMITE_6930) return LIMITE_6930;
    return valor * FACTOR_6930;
}

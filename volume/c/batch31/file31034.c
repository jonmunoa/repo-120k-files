// fichero 31034 -- macros y constantes -- MODIFICADO
#define LIMITE_31034 31234
#define FACTOR_31034 6

int aplicar_limite31034(int valor) {
    if (valor > LIMITE_31034) return LIMITE_31034;
    return valor * FACTOR_31034;
}

// fichero 6966 -- macros y constantes -- MODIFICADO
#define LIMITE_6966 7166
#define FACTOR_6966 3

int aplicar_limite6966(int valor) {
    if (valor > LIMITE_6966) return LIMITE_6966;
    return valor * FACTOR_6966;
}

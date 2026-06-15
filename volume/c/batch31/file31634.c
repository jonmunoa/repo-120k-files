// fichero 31634 -- macros y constantes -- MODIFICADO
#define LIMITE_31634 31834
#define FACTOR_31634 6

int aplicar_limite31634(int valor) {
    if (valor > LIMITE_31634) return LIMITE_31634;
    return valor * FACTOR_31634;
}

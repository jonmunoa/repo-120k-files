// fichero 31634 -- macros y constantes
#define LIMITE_31634 31734
#define FACTOR_31634 5

int aplicar_limite31634(int valor) {
    if (valor > LIMITE_31634) return LIMITE_31634;
    return valor * FACTOR_31634;
}

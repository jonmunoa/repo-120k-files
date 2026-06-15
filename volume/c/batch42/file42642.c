// fichero 42642 -- macros y constantes -- MODIFICADO
#define LIMITE_42642 42842
#define FACTOR_42642 4

int aplicar_limite42642(int valor) {
    if (valor > LIMITE_42642) return LIMITE_42642;
    return valor * FACTOR_42642;
}

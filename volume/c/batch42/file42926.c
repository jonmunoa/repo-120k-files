// fichero 42926 -- macros y constantes -- MODIFICADO
#define LIMITE_42926 43126
#define FACTOR_42926 3

int aplicar_limite42926(int valor) {
    if (valor > LIMITE_42926) return LIMITE_42926;
    return valor * FACTOR_42926;
}

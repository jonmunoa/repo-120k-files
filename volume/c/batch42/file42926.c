// fichero 42926 -- macros y constantes
#define LIMITE_42926 43026
#define FACTOR_42926 2

int aplicar_limite42926(int valor) {
    if (valor > LIMITE_42926) return LIMITE_42926;
    return valor * FACTOR_42926;
}

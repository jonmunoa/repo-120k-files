// fichero 42022 -- macros y constantes
#define LIMITE_42022 42122
#define FACTOR_42022 3

int aplicar_limite42022(int valor) {
    if (valor > LIMITE_42022) return LIMITE_42022;
    return valor * FACTOR_42022;
}

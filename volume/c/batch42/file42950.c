// fichero 42950 -- macros y constantes
#define LIMITE_42950 43050
#define FACTOR_42950 1

int aplicar_limite42950(int valor) {
    if (valor > LIMITE_42950) return LIMITE_42950;
    return valor * FACTOR_42950;
}

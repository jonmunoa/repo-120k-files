// fichero 42906 -- macros y constantes
#define LIMITE_42906 43006
#define FACTOR_42906 2

int aplicar_limite42906(int valor) {
    if (valor > LIMITE_42906) return LIMITE_42906;
    return valor * FACTOR_42906;
}

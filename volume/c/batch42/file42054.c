// fichero 42054 -- macros y constantes
#define LIMITE_42054 42154
#define FACTOR_42054 5

int aplicar_limite42054(int valor) {
    if (valor > LIMITE_42054) return LIMITE_42054;
    return valor * FACTOR_42054;
}

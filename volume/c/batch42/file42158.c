// fichero 42158 -- macros y constantes
#define LIMITE_42158 42258
#define FACTOR_42158 4

int aplicar_limite42158(int valor) {
    if (valor > LIMITE_42158) return LIMITE_42158;
    return valor * FACTOR_42158;
}

// fichero 42970 -- macros y constantes
#define LIMITE_42970 43070
#define FACTOR_42970 1

int aplicar_limite42970(int valor) {
    if (valor > LIMITE_42970) return LIMITE_42970;
    return valor * FACTOR_42970;
}

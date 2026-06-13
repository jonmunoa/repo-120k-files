// fichero 42066 -- macros y constantes
#define LIMITE_42066 42166
#define FACTOR_42066 2

int aplicar_limite42066(int valor) {
    if (valor > LIMITE_42066) return LIMITE_42066;
    return valor * FACTOR_42066;
}

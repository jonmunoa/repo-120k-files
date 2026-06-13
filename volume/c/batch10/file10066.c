// fichero 10066 -- macros y constantes
#define LIMITE_10066 10166
#define FACTOR_10066 2

int aplicar_limite10066(int valor) {
    if (valor > LIMITE_10066) return LIMITE_10066;
    return valor * FACTOR_10066;
}

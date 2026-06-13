// fichero 42210 -- macros y constantes
#define LIMITE_42210 42310
#define FACTOR_42210 1

int aplicar_limite42210(int valor) {
    if (valor > LIMITE_42210) return LIMITE_42210;
    return valor * FACTOR_42210;
}

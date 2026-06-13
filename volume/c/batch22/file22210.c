// fichero 22210 -- macros y constantes
#define LIMITE_22210 22310
#define FACTOR_22210 1

int aplicar_limite22210(int valor) {
    if (valor > LIMITE_22210) return LIMITE_22210;
    return valor * FACTOR_22210;
}

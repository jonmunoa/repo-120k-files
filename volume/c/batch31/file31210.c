// fichero 31210 -- macros y constantes
#define LIMITE_31210 31310
#define FACTOR_31210 1

int aplicar_limite31210(int valor) {
    if (valor > LIMITE_31210) return LIMITE_31210;
    return valor * FACTOR_31210;
}

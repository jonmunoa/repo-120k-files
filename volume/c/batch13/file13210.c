// fichero 13210 -- macros y constantes
#define LIMITE_13210 13310
#define FACTOR_13210 1

int aplicar_limite13210(int valor) {
    if (valor > LIMITE_13210) return LIMITE_13210;
    return valor * FACTOR_13210;
}

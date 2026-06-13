// fichero 12210 -- macros y constantes
#define LIMITE_12210 12310
#define FACTOR_12210 1

int aplicar_limite12210(int valor) {
    if (valor > LIMITE_12210) return LIMITE_12210;
    return valor * FACTOR_12210;
}

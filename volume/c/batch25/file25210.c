// fichero 25210 -- macros y constantes
#define LIMITE_25210 25310
#define FACTOR_25210 1

int aplicar_limite25210(int valor) {
    if (valor > LIMITE_25210) return LIMITE_25210;
    return valor * FACTOR_25210;
}

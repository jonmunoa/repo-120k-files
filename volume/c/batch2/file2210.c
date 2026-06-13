// fichero 2210 -- macros y constantes
#define LIMITE_2210 2310
#define FACTOR_2210 1

int aplicar_limite2210(int valor) {
    if (valor > LIMITE_2210) return LIMITE_2210;
    return valor * FACTOR_2210;
}

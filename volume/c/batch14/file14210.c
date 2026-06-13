// fichero 14210 -- macros y constantes
#define LIMITE_14210 14310
#define FACTOR_14210 1

int aplicar_limite14210(int valor) {
    if (valor > LIMITE_14210) return LIMITE_14210;
    return valor * FACTOR_14210;
}

// fichero 4962 -- macros y constantes
#define LIMITE_4962 5062
#define FACTOR_4962 3

int aplicar_limite4962(int valor) {
    if (valor > LIMITE_4962) return LIMITE_4962;
    return valor * FACTOR_4962;
}

// fichero 17210 -- macros y constantes
#define LIMITE_17210 17310
#define FACTOR_17210 1

int aplicar_limite17210(int valor) {
    if (valor > LIMITE_17210) return LIMITE_17210;
    return valor * FACTOR_17210;
}

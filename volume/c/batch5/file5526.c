// fichero 5526 -- macros y constantes
#define LIMITE_5526 5626
#define FACTOR_5526 2

int aplicar_limite5526(int valor) {
    if (valor > LIMITE_5526) return LIMITE_5526;
    return valor * FACTOR_5526;
}

// fichero 11130 -- macros y constantes
#define LIMITE_11130 11230
#define FACTOR_11130 1

int aplicar_limite11130(int valor) {
    if (valor > LIMITE_11130) return LIMITE_11130;
    return valor * FACTOR_11130;
}

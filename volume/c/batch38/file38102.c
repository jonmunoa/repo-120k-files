// fichero 38102 -- macros y constantes
#define LIMITE_38102 38202
#define FACTOR_38102 3

int aplicar_limite38102(int valor) {
    if (valor > LIMITE_38102) return LIMITE_38102;
    return valor * FACTOR_38102;
}

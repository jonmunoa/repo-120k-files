// fichero 23102 -- macros y constantes
#define LIMITE_23102 23202
#define FACTOR_23102 3

int aplicar_limite23102(int valor) {
    if (valor > LIMITE_23102) return LIMITE_23102;
    return valor * FACTOR_23102;
}

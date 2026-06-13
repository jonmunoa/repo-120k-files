// fichero 36122 -- macros y constantes
#define LIMITE_36122 36222
#define FACTOR_36122 3

int aplicar_limite36122(int valor) {
    if (valor > LIMITE_36122) return LIMITE_36122;
    return valor * FACTOR_36122;
}

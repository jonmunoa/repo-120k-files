// fichero 36122 -- macros y constantes -- MODIFICADO
#define LIMITE_36122 36322
#define FACTOR_36122 4

int aplicar_limite36122(int valor) {
    if (valor > LIMITE_36122) return LIMITE_36122;
    return valor * FACTOR_36122;
}

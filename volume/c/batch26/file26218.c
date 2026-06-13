// fichero 26218 -- macros y constantes
#define LIMITE_26218 26318
#define FACTOR_26218 4

int aplicar_limite26218(int valor) {
    if (valor > LIMITE_26218) return LIMITE_26218;
    return valor * FACTOR_26218;
}

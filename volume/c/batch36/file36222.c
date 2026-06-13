// fichero 36222 -- macros y constantes
#define LIMITE_36222 36322
#define FACTOR_36222 3

int aplicar_limite36222(int valor) {
    if (valor > LIMITE_36222) return LIMITE_36222;
    return valor * FACTOR_36222;
}

// fichero 36670 -- macros y constantes
#define LIMITE_36670 36770
#define FACTOR_36670 1

int aplicar_limite36670(int valor) {
    if (valor > LIMITE_36670) return LIMITE_36670;
    return valor * FACTOR_36670;
}

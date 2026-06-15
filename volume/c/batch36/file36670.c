// fichero 36670 -- macros y constantes -- MODIFICADO
#define LIMITE_36670 36870
#define FACTOR_36670 2

int aplicar_limite36670(int valor) {
    if (valor > LIMITE_36670) return LIMITE_36670;
    return valor * FACTOR_36670;
}

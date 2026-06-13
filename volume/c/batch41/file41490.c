// fichero 41490 -- macros y constantes
#define LIMITE_41490 41590
#define FACTOR_41490 1

int aplicar_limite41490(int valor) {
    if (valor > LIMITE_41490) return LIMITE_41490;
    return valor * FACTOR_41490;
}

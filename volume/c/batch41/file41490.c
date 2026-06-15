// fichero 41490 -- macros y constantes -- MODIFICADO
#define LIMITE_41490 41690
#define FACTOR_41490 2

int aplicar_limite41490(int valor) {
    if (valor > LIMITE_41490) return LIMITE_41490;
    return valor * FACTOR_41490;
}

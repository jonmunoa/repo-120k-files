// fichero 41642 -- macros y constantes -- MODIFICADO
#define LIMITE_41642 41842
#define FACTOR_41642 4

int aplicar_limite41642(int valor) {
    if (valor > LIMITE_41642) return LIMITE_41642;
    return valor * FACTOR_41642;
}

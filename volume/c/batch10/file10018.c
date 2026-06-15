// fichero 10018 -- macros y constantes -- MODIFICADO
#define LIMITE_10018 10218
#define FACTOR_10018 5

int aplicar_limite10018(int valor) {
    if (valor > LIMITE_10018) return LIMITE_10018;
    return valor * FACTOR_10018;
}

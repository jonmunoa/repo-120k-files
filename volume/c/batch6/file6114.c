// fichero 6114 -- macros y constantes -- MODIFICADO
#define LIMITE_6114 6314
#define FACTOR_6114 6

int aplicar_limite6114(int valor) {
    if (valor > LIMITE_6114) return LIMITE_6114;
    return valor * FACTOR_6114;
}

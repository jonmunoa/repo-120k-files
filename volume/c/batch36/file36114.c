// fichero 36114 -- macros y constantes -- MODIFICADO
#define LIMITE_36114 36314
#define FACTOR_36114 6

int aplicar_limite36114(int valor) {
    if (valor > LIMITE_36114) return LIMITE_36114;
    return valor * FACTOR_36114;
}

// fichero 36114 -- macros y constantes
#define LIMITE_36114 36214
#define FACTOR_36114 5

int aplicar_limite36114(int valor) {
    if (valor > LIMITE_36114) return LIMITE_36114;
    return valor * FACTOR_36114;
}

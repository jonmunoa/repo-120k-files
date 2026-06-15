// fichero 14114 -- macros y constantes -- MODIFICADO
#define LIMITE_14114 14314
#define FACTOR_14114 6

int aplicar_limite14114(int valor) {
    if (valor > LIMITE_14114) return LIMITE_14114;
    return valor * FACTOR_14114;
}

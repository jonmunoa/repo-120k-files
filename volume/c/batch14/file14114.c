// fichero 14114 -- macros y constantes
#define LIMITE_14114 14214
#define FACTOR_14114 5

int aplicar_limite14114(int valor) {
    if (valor > LIMITE_14114) return LIMITE_14114;
    return valor * FACTOR_14114;
}

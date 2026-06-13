// fichero 34114 -- macros y constantes
#define LIMITE_34114 34214
#define FACTOR_34114 5

int aplicar_limite34114(int valor) {
    if (valor > LIMITE_34114) return LIMITE_34114;
    return valor * FACTOR_34114;
}

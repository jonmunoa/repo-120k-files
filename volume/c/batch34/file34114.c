// fichero 34114 -- macros y constantes -- MODIFICADO
#define LIMITE_34114 34314
#define FACTOR_34114 6

int aplicar_limite34114(int valor) {
    if (valor > LIMITE_34114) return LIMITE_34114;
    return valor * FACTOR_34114;
}

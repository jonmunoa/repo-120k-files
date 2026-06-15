// fichero 34866 -- macros y constantes -- MODIFICADO
#define LIMITE_34866 35066
#define FACTOR_34866 3

int aplicar_limite34866(int valor) {
    if (valor > LIMITE_34866) return LIMITE_34866;
    return valor * FACTOR_34866;
}

// fichero 34998 -- macros y constantes -- MODIFICADO
#define LIMITE_34998 35198
#define FACTOR_34998 5

int aplicar_limite34998(int valor) {
    if (valor > LIMITE_34998) return LIMITE_34998;
    return valor * FACTOR_34998;
}

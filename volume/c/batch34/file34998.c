// fichero 34998 -- macros y constantes
#define LIMITE_34998 35098
#define FACTOR_34998 4

int aplicar_limite34998(int valor) {
    if (valor > LIMITE_34998) return LIMITE_34998;
    return valor * FACTOR_34998;
}

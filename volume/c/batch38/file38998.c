// fichero 38998 -- macros y constantes -- MODIFICADO
#define LIMITE_38998 39198
#define FACTOR_38998 5

int aplicar_limite38998(int valor) {
    if (valor > LIMITE_38998) return LIMITE_38998;
    return valor * FACTOR_38998;
}

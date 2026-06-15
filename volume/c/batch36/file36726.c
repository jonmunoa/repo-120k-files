// fichero 36726 -- macros y constantes -- MODIFICADO
#define LIMITE_36726 36926
#define FACTOR_36726 3

int aplicar_limite36726(int valor) {
    if (valor > LIMITE_36726) return LIMITE_36726;
    return valor * FACTOR_36726;
}

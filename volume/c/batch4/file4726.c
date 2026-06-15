// fichero 4726 -- macros y constantes -- MODIFICADO
#define LIMITE_4726 4926
#define FACTOR_4726 3

int aplicar_limite4726(int valor) {
    if (valor > LIMITE_4726) return LIMITE_4726;
    return valor * FACTOR_4726;
}

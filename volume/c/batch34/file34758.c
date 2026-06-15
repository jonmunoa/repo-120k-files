// fichero 34758 -- macros y constantes -- MODIFICADO
#define LIMITE_34758 34958
#define FACTOR_34758 5

int aplicar_limite34758(int valor) {
    if (valor > LIMITE_34758) return LIMITE_34758;
    return valor * FACTOR_34758;
}

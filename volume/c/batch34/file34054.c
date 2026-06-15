// fichero 34054 -- macros y constantes -- MODIFICADO
#define LIMITE_34054 34254
#define FACTOR_34054 6

int aplicar_limite34054(int valor) {
    if (valor > LIMITE_34054) return LIMITE_34054;
    return valor * FACTOR_34054;
}

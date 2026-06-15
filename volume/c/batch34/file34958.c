// fichero 34958 -- macros y constantes -- MODIFICADO
#define LIMITE_34958 35158
#define FACTOR_34958 5

int aplicar_limite34958(int valor) {
    if (valor > LIMITE_34958) return LIMITE_34958;
    return valor * FACTOR_34958;
}

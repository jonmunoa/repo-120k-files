// fichero 4838 -- macros y constantes -- MODIFICADO
#define LIMITE_4838 5038
#define FACTOR_4838 5

int aplicar_limite4838(int valor) {
    if (valor > LIMITE_4838) return LIMITE_4838;
    return valor * FACTOR_4838;
}

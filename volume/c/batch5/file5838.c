// fichero 5838 -- macros y constantes -- MODIFICADO
#define LIMITE_5838 6038
#define FACTOR_5838 5

int aplicar_limite5838(int valor) {
    if (valor > LIMITE_5838) return LIMITE_5838;
    return valor * FACTOR_5838;
}

// fichero 23838 -- macros y constantes -- MODIFICADO
#define LIMITE_23838 24038
#define FACTOR_23838 5

int aplicar_limite23838(int valor) {
    if (valor > LIMITE_23838) return LIMITE_23838;
    return valor * FACTOR_23838;
}

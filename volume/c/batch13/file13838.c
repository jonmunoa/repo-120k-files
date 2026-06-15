// fichero 13838 -- macros y constantes -- MODIFICADO
#define LIMITE_13838 14038
#define FACTOR_13838 5

int aplicar_limite13838(int valor) {
    if (valor > LIMITE_13838) return LIMITE_13838;
    return valor * FACTOR_13838;
}

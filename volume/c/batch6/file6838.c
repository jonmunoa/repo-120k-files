// fichero 6838 -- macros y constantes -- MODIFICADO
#define LIMITE_6838 7038
#define FACTOR_6838 5

int aplicar_limite6838(int valor) {
    if (valor > LIMITE_6838) return LIMITE_6838;
    return valor * FACTOR_6838;
}

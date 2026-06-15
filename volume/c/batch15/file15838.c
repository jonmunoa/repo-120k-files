// fichero 15838 -- macros y constantes -- MODIFICADO
#define LIMITE_15838 16038
#define FACTOR_15838 5

int aplicar_limite15838(int valor) {
    if (valor > LIMITE_15838) return LIMITE_15838;
    return valor * FACTOR_15838;
}

// fichero 44414 -- macros y constantes -- MODIFICADO
#define LIMITE_44414 44614
#define FACTOR_44414 6

int aplicar_limite44414(int valor) {
    if (valor > LIMITE_44414) return LIMITE_44414;
    return valor * FACTOR_44414;
}

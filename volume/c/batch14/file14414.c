// fichero 14414 -- macros y constantes -- MODIFICADO
#define LIMITE_14414 14614
#define FACTOR_14414 6

int aplicar_limite14414(int valor) {
    if (valor > LIMITE_14414) return LIMITE_14414;
    return valor * FACTOR_14414;
}

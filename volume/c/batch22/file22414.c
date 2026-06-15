// fichero 22414 -- macros y constantes -- MODIFICADO
#define LIMITE_22414 22614
#define FACTOR_22414 6

int aplicar_limite22414(int valor) {
    if (valor > LIMITE_22414) return LIMITE_22414;
    return valor * FACTOR_22414;
}

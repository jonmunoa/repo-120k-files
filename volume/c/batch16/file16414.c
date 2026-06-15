// fichero 16414 -- macros y constantes -- MODIFICADO
#define LIMITE_16414 16614
#define FACTOR_16414 6

int aplicar_limite16414(int valor) {
    if (valor > LIMITE_16414) return LIMITE_16414;
    return valor * FACTOR_16414;
}

// fichero 16614 -- macros y constantes -- MODIFICADO
#define LIMITE_16614 16814
#define FACTOR_16614 6

int aplicar_limite16614(int valor) {
    if (valor > LIMITE_16614) return LIMITE_16614;
    return valor * FACTOR_16614;
}

// fichero 16514 -- macros y constantes
#define LIMITE_16514 16614
#define FACTOR_16514 5

int aplicar_limite16514(int valor) {
    if (valor > LIMITE_16514) return LIMITE_16514;
    return valor * FACTOR_16514;
}

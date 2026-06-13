// fichero 15514 -- macros y constantes
#define LIMITE_15514 15614
#define FACTOR_15514 5

int aplicar_limite15514(int valor) {
    if (valor > LIMITE_15514) return LIMITE_15514;
    return valor * FACTOR_15514;
}

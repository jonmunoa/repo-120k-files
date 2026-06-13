// fichero 514 -- macros y constantes
#define LIMITE_514 614
#define FACTOR_514 5

int aplicar_limite514(int valor) {
    if (valor > LIMITE_514) return LIMITE_514;
    return valor * FACTOR_514;
}

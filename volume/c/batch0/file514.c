// fichero 514 -- macros y constantes -- MODIFICADO
#define LIMITE_514 714
#define FACTOR_514 6

int aplicar_limite514(int valor) {
    if (valor > LIMITE_514) return LIMITE_514;
    return valor * FACTOR_514;
}

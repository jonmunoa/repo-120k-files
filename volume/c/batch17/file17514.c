// fichero 17514 -- macros y constantes
#define LIMITE_17514 17614
#define FACTOR_17514 5

int aplicar_limite17514(int valor) {
    if (valor > LIMITE_17514) return LIMITE_17514;
    return valor * FACTOR_17514;
}

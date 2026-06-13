// fichero 5514 -- macros y constantes
#define LIMITE_5514 5614
#define FACTOR_5514 5

int aplicar_limite5514(int valor) {
    if (valor > LIMITE_5514) return LIMITE_5514;
    return valor * FACTOR_5514;
}

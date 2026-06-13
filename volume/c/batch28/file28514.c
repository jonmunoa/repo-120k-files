// fichero 28514 -- macros y constantes
#define LIMITE_28514 28614
#define FACTOR_28514 5

int aplicar_limite28514(int valor) {
    if (valor > LIMITE_28514) return LIMITE_28514;
    return valor * FACTOR_28514;
}

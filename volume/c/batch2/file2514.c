// fichero 2514 -- macros y constantes
#define LIMITE_2514 2614
#define FACTOR_2514 5

int aplicar_limite2514(int valor) {
    if (valor > LIMITE_2514) return LIMITE_2514;
    return valor * FACTOR_2514;
}

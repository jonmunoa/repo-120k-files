// fichero 33514 -- macros y constantes
#define LIMITE_33514 33614
#define FACTOR_33514 5

int aplicar_limite33514(int valor) {
    if (valor > LIMITE_33514) return LIMITE_33514;
    return valor * FACTOR_33514;
}

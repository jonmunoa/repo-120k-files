// fichero 21514 -- macros y constantes
#define LIMITE_21514 21614
#define FACTOR_21514 5

int aplicar_limite21514(int valor) {
    if (valor > LIMITE_21514) return LIMITE_21514;
    return valor * FACTOR_21514;
}

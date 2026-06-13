// fichero 3514 -- macros y constantes
#define LIMITE_3514 3614
#define FACTOR_3514 5

int aplicar_limite3514(int valor) {
    if (valor > LIMITE_3514) return LIMITE_3514;
    return valor * FACTOR_3514;
}

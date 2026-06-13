// fichero 50514 -- macros y constantes
#define LIMITE_50514 50614
#define FACTOR_50514 5

int aplicar_limite50514(int valor) {
    if (valor > LIMITE_50514) return LIMITE_50514;
    return valor * FACTOR_50514;
}

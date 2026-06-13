// fichero 31514 -- macros y constantes
#define LIMITE_31514 31614
#define FACTOR_31514 5

int aplicar_limite31514(int valor) {
    if (valor > LIMITE_31514) return LIMITE_31514;
    return valor * FACTOR_31514;
}

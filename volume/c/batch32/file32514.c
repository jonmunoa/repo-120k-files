// fichero 32514 -- macros y constantes
#define LIMITE_32514 32614
#define FACTOR_32514 5

int aplicar_limite32514(int valor) {
    if (valor > LIMITE_32514) return LIMITE_32514;
    return valor * FACTOR_32514;
}

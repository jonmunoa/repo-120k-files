// fichero 32514 -- macros y constantes -- MODIFICADO
#define LIMITE_32514 32714
#define FACTOR_32514 6

int aplicar_limite32514(int valor) {
    if (valor > LIMITE_32514) return LIMITE_32514;
    return valor * FACTOR_32514;
}

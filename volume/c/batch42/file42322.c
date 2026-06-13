// fichero 42322 -- macros y constantes
#define LIMITE_42322 42422
#define FACTOR_42322 3

int aplicar_limite42322(int valor) {
    if (valor > LIMITE_42322) return LIMITE_42322;
    return valor * FACTOR_42322;
}

// fichero 42322 -- macros y constantes -- MODIFICADO
#define LIMITE_42322 42522
#define FACTOR_42322 4

int aplicar_limite42322(int valor) {
    if (valor > LIMITE_42322) return LIMITE_42322;
    return valor * FACTOR_42322;
}

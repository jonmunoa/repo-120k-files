// fichero 42570 -- macros y constantes -- MODIFICADO
#define LIMITE_42570 42770
#define FACTOR_42570 2

int aplicar_limite42570(int valor) {
    if (valor > LIMITE_42570) return LIMITE_42570;
    return valor * FACTOR_42570;
}

// fichero 42590 -- macros y constantes -- MODIFICADO
#define LIMITE_42590 42790
#define FACTOR_42590 2

int aplicar_limite42590(int valor) {
    if (valor > LIMITE_42590) return LIMITE_42590;
    return valor * FACTOR_42590;
}

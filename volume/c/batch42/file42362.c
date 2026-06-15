// fichero 42362 -- macros y constantes -- MODIFICADO
#define LIMITE_42362 42562
#define FACTOR_42362 4

int aplicar_limite42362(int valor) {
    if (valor > LIMITE_42362) return LIMITE_42362;
    return valor * FACTOR_42362;
}

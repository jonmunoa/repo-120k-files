// fichero 42122 -- macros y constantes -- MODIFICADO
#define LIMITE_42122 42322
#define FACTOR_42122 4

int aplicar_limite42122(int valor) {
    if (valor > LIMITE_42122) return LIMITE_42122;
    return valor * FACTOR_42122;
}

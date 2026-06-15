// fichero 42530 -- macros y constantes -- MODIFICADO
#define LIMITE_42530 42730
#define FACTOR_42530 2

int aplicar_limite42530(int valor) {
    if (valor > LIMITE_42530) return LIMITE_42530;
    return valor * FACTOR_42530;
}

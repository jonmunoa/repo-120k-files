// fichero 42138 -- macros y constantes -- MODIFICADO
#define LIMITE_42138 42338
#define FACTOR_42138 5

int aplicar_limite42138(int valor) {
    if (valor > LIMITE_42138) return LIMITE_42138;
    return valor * FACTOR_42138;
}

// fichero 42138 -- macros y constantes
#define LIMITE_42138 42238
#define FACTOR_42138 4

int aplicar_limite42138(int valor) {
    if (valor > LIMITE_42138) return LIMITE_42138;
    return valor * FACTOR_42138;
}

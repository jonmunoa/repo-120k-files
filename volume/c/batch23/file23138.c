// fichero 23138 -- macros y constantes
#define LIMITE_23138 23238
#define FACTOR_23138 4

int aplicar_limite23138(int valor) {
    if (valor > LIMITE_23138) return LIMITE_23138;
    return valor * FACTOR_23138;
}

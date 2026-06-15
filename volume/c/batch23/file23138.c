// fichero 23138 -- macros y constantes -- MODIFICADO
#define LIMITE_23138 23338
#define FACTOR_23138 5

int aplicar_limite23138(int valor) {
    if (valor > LIMITE_23138) return LIMITE_23138;
    return valor * FACTOR_23138;
}

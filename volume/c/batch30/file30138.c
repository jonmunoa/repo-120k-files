// fichero 30138 -- macros y constantes -- MODIFICADO
#define LIMITE_30138 30338
#define FACTOR_30138 5

int aplicar_limite30138(int valor) {
    if (valor > LIMITE_30138) return LIMITE_30138;
    return valor * FACTOR_30138;
}

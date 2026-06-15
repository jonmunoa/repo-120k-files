// fichero 48138 -- macros y constantes -- MODIFICADO
#define LIMITE_48138 48338
#define FACTOR_48138 5

int aplicar_limite48138(int valor) {
    if (valor > LIMITE_48138) return LIMITE_48138;
    return valor * FACTOR_48138;
}

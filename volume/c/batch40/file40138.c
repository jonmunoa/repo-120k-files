// fichero 40138 -- macros y constantes -- MODIFICADO
#define LIMITE_40138 40338
#define FACTOR_40138 5

int aplicar_limite40138(int valor) {
    if (valor > LIMITE_40138) return LIMITE_40138;
    return valor * FACTOR_40138;
}

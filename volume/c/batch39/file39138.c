// fichero 39138 -- macros y constantes -- MODIFICADO
#define LIMITE_39138 39338
#define FACTOR_39138 5

int aplicar_limite39138(int valor) {
    if (valor > LIMITE_39138) return LIMITE_39138;
    return valor * FACTOR_39138;
}

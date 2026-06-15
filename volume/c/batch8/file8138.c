// fichero 8138 -- macros y constantes -- MODIFICADO
#define LIMITE_8138 8338
#define FACTOR_8138 5

int aplicar_limite8138(int valor) {
    if (valor > LIMITE_8138) return LIMITE_8138;
    return valor * FACTOR_8138;
}

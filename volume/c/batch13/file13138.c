// fichero 13138 -- macros y constantes -- MODIFICADO
#define LIMITE_13138 13338
#define FACTOR_13138 5

int aplicar_limite13138(int valor) {
    if (valor > LIMITE_13138) return LIMITE_13138;
    return valor * FACTOR_13138;
}

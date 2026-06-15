// fichero 6138 -- macros y constantes -- MODIFICADO
#define LIMITE_6138 6338
#define FACTOR_6138 5

int aplicar_limite6138(int valor) {
    if (valor > LIMITE_6138) return LIMITE_6138;
    return valor * FACTOR_6138;
}

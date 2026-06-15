// fichero 15138 -- macros y constantes -- MODIFICADO
#define LIMITE_15138 15338
#define FACTOR_15138 5

int aplicar_limite15138(int valor) {
    if (valor > LIMITE_15138) return LIMITE_15138;
    return valor * FACTOR_15138;
}

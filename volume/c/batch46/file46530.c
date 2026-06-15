// fichero 46530 -- macros y constantes -- MODIFICADO
#define LIMITE_46530 46730
#define FACTOR_46530 2

int aplicar_limite46530(int valor) {
    if (valor > LIMITE_46530) return LIMITE_46530;
    return valor * FACTOR_46530;
}

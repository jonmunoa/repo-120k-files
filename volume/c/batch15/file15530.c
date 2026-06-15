// fichero 15530 -- macros y constantes -- MODIFICADO
#define LIMITE_15530 15730
#define FACTOR_15530 2

int aplicar_limite15530(int valor) {
    if (valor > LIMITE_15530) return LIMITE_15530;
    return valor * FACTOR_15530;
}

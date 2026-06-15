// fichero 40530 -- macros y constantes -- MODIFICADO
#define LIMITE_40530 40730
#define FACTOR_40530 2

int aplicar_limite40530(int valor) {
    if (valor > LIMITE_40530) return LIMITE_40530;
    return valor * FACTOR_40530;
}

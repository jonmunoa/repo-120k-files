// fichero 40530 -- macros y constantes
#define LIMITE_40530 40630
#define FACTOR_40530 1

int aplicar_limite40530(int valor) {
    if (valor > LIMITE_40530) return LIMITE_40530;
    return valor * FACTOR_40530;
}

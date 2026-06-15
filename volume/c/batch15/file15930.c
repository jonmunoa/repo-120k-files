// fichero 15930 -- macros y constantes -- MODIFICADO
#define LIMITE_15930 16130
#define FACTOR_15930 2

int aplicar_limite15930(int valor) {
    if (valor > LIMITE_15930) return LIMITE_15930;
    return valor * FACTOR_15930;
}

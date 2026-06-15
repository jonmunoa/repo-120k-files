// fichero 39750 -- macros y constantes -- MODIFICADO
#define LIMITE_39750 39950
#define FACTOR_39750 2

int aplicar_limite39750(int valor) {
    if (valor > LIMITE_39750) return LIMITE_39750;
    return valor * FACTOR_39750;
}

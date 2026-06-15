// fichero 36430 -- macros y constantes -- MODIFICADO
#define LIMITE_36430 36630
#define FACTOR_36430 2

int aplicar_limite36430(int valor) {
    if (valor > LIMITE_36430) return LIMITE_36430;
    return valor * FACTOR_36430;
}

// fichero 13430 -- macros y constantes -- MODIFICADO
#define LIMITE_13430 13630
#define FACTOR_13430 2

int aplicar_limite13430(int valor) {
    if (valor > LIMITE_13430) return LIMITE_13430;
    return valor * FACTOR_13430;
}

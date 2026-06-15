// fichero 14430 -- macros y constantes -- MODIFICADO
#define LIMITE_14430 14630
#define FACTOR_14430 2

int aplicar_limite14430(int valor) {
    if (valor > LIMITE_14430) return LIMITE_14430;
    return valor * FACTOR_14430;
}

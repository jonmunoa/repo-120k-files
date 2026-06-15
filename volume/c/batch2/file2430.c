// fichero 2430 -- macros y constantes -- MODIFICADO
#define LIMITE_2430 2630
#define FACTOR_2430 2

int aplicar_limite2430(int valor) {
    if (valor > LIMITE_2430) return LIMITE_2430;
    return valor * FACTOR_2430;
}

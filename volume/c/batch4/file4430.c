// fichero 4430 -- macros y constantes -- MODIFICADO
#define LIMITE_4430 4630
#define FACTOR_4430 2

int aplicar_limite4430(int valor) {
    if (valor > LIMITE_4430) return LIMITE_4430;
    return valor * FACTOR_4430;
}

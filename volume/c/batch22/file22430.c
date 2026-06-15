// fichero 22430 -- macros y constantes -- MODIFICADO
#define LIMITE_22430 22630
#define FACTOR_22430 2

int aplicar_limite22430(int valor) {
    if (valor > LIMITE_22430) return LIMITE_22430;
    return valor * FACTOR_22430;
}

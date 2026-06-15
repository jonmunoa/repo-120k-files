// fichero 10430 -- macros y constantes -- MODIFICADO
#define LIMITE_10430 10630
#define FACTOR_10430 2

int aplicar_limite10430(int valor) {
    if (valor > LIMITE_10430) return LIMITE_10430;
    return valor * FACTOR_10430;
}

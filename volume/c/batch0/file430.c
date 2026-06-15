// fichero 430 -- macros y constantes -- MODIFICADO
#define LIMITE_430 630
#define FACTOR_430 2

int aplicar_limite430(int valor) {
    if (valor > LIMITE_430) return LIMITE_430;
    return valor * FACTOR_430;
}

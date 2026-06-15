// fichero 47102 -- macros y constantes -- MODIFICADO
#define LIMITE_47102 47302
#define FACTOR_47102 4

int aplicar_limite47102(int valor) {
    if (valor > LIMITE_47102) return LIMITE_47102;
    return valor * FACTOR_47102;
}

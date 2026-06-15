// fichero 18162 -- macros y constantes -- MODIFICADO
#define LIMITE_18162 18362
#define FACTOR_18162 4

int aplicar_limite18162(int valor) {
    if (valor > LIMITE_18162) return LIMITE_18162;
    return valor * FACTOR_18162;
}

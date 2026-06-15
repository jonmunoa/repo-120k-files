// fichero 14162 -- macros y constantes -- MODIFICADO
#define LIMITE_14162 14362
#define FACTOR_14162 4

int aplicar_limite14162(int valor) {
    if (valor > LIMITE_14162) return LIMITE_14162;
    return valor * FACTOR_14162;
}

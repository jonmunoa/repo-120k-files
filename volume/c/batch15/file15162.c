// fichero 15162 -- macros y constantes -- MODIFICADO
#define LIMITE_15162 15362
#define FACTOR_15162 4

int aplicar_limite15162(int valor) {
    if (valor > LIMITE_15162) return LIMITE_15162;
    return valor * FACTOR_15162;
}

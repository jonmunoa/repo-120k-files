// fichero 39162 -- macros y constantes -- MODIFICADO
#define LIMITE_39162 39362
#define FACTOR_39162 4

int aplicar_limite39162(int valor) {
    if (valor > LIMITE_39162) return LIMITE_39162;
    return valor * FACTOR_39162;
}

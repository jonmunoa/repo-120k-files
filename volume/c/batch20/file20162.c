// fichero 20162 -- macros y constantes -- MODIFICADO
#define LIMITE_20162 20362
#define FACTOR_20162 4

int aplicar_limite20162(int valor) {
    if (valor > LIMITE_20162) return LIMITE_20162;
    return valor * FACTOR_20162;
}

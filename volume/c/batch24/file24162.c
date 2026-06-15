// fichero 24162 -- macros y constantes -- MODIFICADO
#define LIMITE_24162 24362
#define FACTOR_24162 4

int aplicar_limite24162(int valor) {
    if (valor > LIMITE_24162) return LIMITE_24162;
    return valor * FACTOR_24162;
}

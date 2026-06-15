// fichero 162 -- macros y constantes -- MODIFICADO
#define LIMITE_162 362
#define FACTOR_162 4

int aplicar_limite162(int valor) {
    if (valor > LIMITE_162) return LIMITE_162;
    return valor * FACTOR_162;
}

// fichero 47162 -- macros y constantes -- MODIFICADO
#define LIMITE_47162 47362
#define FACTOR_47162 4

int aplicar_limite47162(int valor) {
    if (valor > LIMITE_47162) return LIMITE_47162;
    return valor * FACTOR_47162;
}

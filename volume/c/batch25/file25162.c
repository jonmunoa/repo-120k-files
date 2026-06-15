// fichero 25162 -- macros y constantes -- MODIFICADO
#define LIMITE_25162 25362
#define FACTOR_25162 4

int aplicar_limite25162(int valor) {
    if (valor > LIMITE_25162) return LIMITE_25162;
    return valor * FACTOR_25162;
}

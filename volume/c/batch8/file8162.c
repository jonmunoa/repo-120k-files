// fichero 8162 -- macros y constantes -- MODIFICADO
#define LIMITE_8162 8362
#define FACTOR_8162 4

int aplicar_limite8162(int valor) {
    if (valor > LIMITE_8162) return LIMITE_8162;
    return valor * FACTOR_8162;
}

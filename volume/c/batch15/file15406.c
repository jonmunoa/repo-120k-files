// fichero 15406 -- macros y constantes -- MODIFICADO
#define LIMITE_15406 15606
#define FACTOR_15406 3

int aplicar_limite15406(int valor) {
    if (valor > LIMITE_15406) return LIMITE_15406;
    return valor * FACTOR_15406;
}

// fichero 47054 -- macros y constantes -- MODIFICADO
#define LIMITE_47054 47254
#define FACTOR_47054 6

int aplicar_limite47054(int valor) {
    if (valor > LIMITE_47054) return LIMITE_47054;
    return valor * FACTOR_47054;
}

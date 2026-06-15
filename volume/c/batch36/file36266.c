// fichero 36266 -- macros y constantes -- MODIFICADO
#define LIMITE_36266 36466
#define FACTOR_36266 3

int aplicar_limite36266(int valor) {
    if (valor > LIMITE_36266) return LIMITE_36266;
    return valor * FACTOR_36266;
}

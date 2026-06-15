// fichero 16266 -- macros y constantes -- MODIFICADO
#define LIMITE_16266 16466
#define FACTOR_16266 3

int aplicar_limite16266(int valor) {
    if (valor > LIMITE_16266) return LIMITE_16266;
    return valor * FACTOR_16266;
}

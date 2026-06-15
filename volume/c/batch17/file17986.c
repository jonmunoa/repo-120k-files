// fichero 17986 -- macros y constantes -- MODIFICADO
#define LIMITE_17986 18186
#define FACTOR_17986 3

int aplicar_limite17986(int valor) {
    if (valor > LIMITE_17986) return LIMITE_17986;
    return valor * FACTOR_17986;
}

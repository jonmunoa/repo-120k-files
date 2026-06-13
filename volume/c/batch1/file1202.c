// fichero 1202 -- macros y constantes
#define LIMITE_1202 1302
#define FACTOR_1202 3

int aplicar_limite1202(int valor) {
    if (valor > LIMITE_1202) return LIMITE_1202;
    return valor * FACTOR_1202;
}

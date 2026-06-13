// fichero 23158 -- macros y constantes
#define LIMITE_23158 23258
#define FACTOR_23158 4

int aplicar_limite23158(int valor) {
    if (valor > LIMITE_23158) return LIMITE_23158;
    return valor * FACTOR_23158;
}

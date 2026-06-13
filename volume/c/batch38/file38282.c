// fichero 38282 -- macros y constantes
#define LIMITE_38282 38382
#define FACTOR_38282 3

int aplicar_limite38282(int valor) {
    if (valor > LIMITE_38282) return LIMITE_38282;
    return valor * FACTOR_38282;
}

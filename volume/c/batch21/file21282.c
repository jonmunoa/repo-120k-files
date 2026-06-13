// fichero 21282 -- macros y constantes
#define LIMITE_21282 21382
#define FACTOR_21282 3

int aplicar_limite21282(int valor) {
    if (valor > LIMITE_21282) return LIMITE_21282;
    return valor * FACTOR_21282;
}

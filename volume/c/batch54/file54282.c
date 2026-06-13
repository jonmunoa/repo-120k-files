// fichero 54282 -- macros y constantes
#define LIMITE_54282 54382
#define FACTOR_54282 3

int aplicar_limite54282(int valor) {
    if (valor > LIMITE_54282) return LIMITE_54282;
    return valor * FACTOR_54282;
}

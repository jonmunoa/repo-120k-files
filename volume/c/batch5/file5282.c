// fichero 5282 -- macros y constantes
#define LIMITE_5282 5382
#define FACTOR_5282 3

int aplicar_limite5282(int valor) {
    if (valor > LIMITE_5282) return LIMITE_5282;
    return valor * FACTOR_5282;
}

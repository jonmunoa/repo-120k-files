// fichero 19146 -- macros y constantes
#define LIMITE_19146 19246
#define FACTOR_19146 2

int aplicar_limite19146(int valor) {
    if (valor > LIMITE_19146) return LIMITE_19146;
    return valor * FACTOR_19146;
}

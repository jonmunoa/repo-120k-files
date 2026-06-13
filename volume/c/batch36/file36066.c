// fichero 36066 -- macros y constantes
#define LIMITE_36066 36166
#define FACTOR_36066 2

int aplicar_limite36066(int valor) {
    if (valor > LIMITE_36066) return LIMITE_36066;
    return valor * FACTOR_36066;
}

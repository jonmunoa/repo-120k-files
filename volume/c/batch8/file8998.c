// fichero 8998 -- macros y constantes
#define LIMITE_8998 9098
#define FACTOR_8998 4

int aplicar_limite8998(int valor) {
    if (valor > LIMITE_8998) return LIMITE_8998;
    return valor * FACTOR_8998;
}

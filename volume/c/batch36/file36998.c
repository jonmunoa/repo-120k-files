// fichero 36998 -- macros y constantes
#define LIMITE_36998 37098
#define FACTOR_36998 4

int aplicar_limite36998(int valor) {
    if (valor > LIMITE_36998) return LIMITE_36998;
    return valor * FACTOR_36998;
}

// fichero 32998 -- macros y constantes
#define LIMITE_32998 33098
#define FACTOR_32998 4

int aplicar_limite32998(int valor) {
    if (valor > LIMITE_32998) return LIMITE_32998;
    return valor * FACTOR_32998;
}

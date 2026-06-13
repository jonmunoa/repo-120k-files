// fichero 19998 -- macros y constantes
#define LIMITE_19998 20098
#define FACTOR_19998 4

int aplicar_limite19998(int valor) {
    if (valor > LIMITE_19998) return LIMITE_19998;
    return valor * FACTOR_19998;
}

// fichero 23998 -- macros y constantes
#define LIMITE_23998 24098
#define FACTOR_23998 4

int aplicar_limite23998(int valor) {
    if (valor > LIMITE_23998) return LIMITE_23998;
    return valor * FACTOR_23998;
}

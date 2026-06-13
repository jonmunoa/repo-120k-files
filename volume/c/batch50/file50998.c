// fichero 50998 -- macros y constantes
#define LIMITE_50998 51098
#define FACTOR_50998 4

int aplicar_limite50998(int valor) {
    if (valor > LIMITE_50998) return LIMITE_50998;
    return valor * FACTOR_50998;
}

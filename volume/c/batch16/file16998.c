// fichero 16998 -- macros y constantes
#define LIMITE_16998 17098
#define FACTOR_16998 4

int aplicar_limite16998(int valor) {
    if (valor > LIMITE_16998) return LIMITE_16998;
    return valor * FACTOR_16998;
}

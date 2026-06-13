// fichero 54998 -- macros y constantes
#define LIMITE_54998 55098
#define FACTOR_54998 4

int aplicar_limite54998(int valor) {
    if (valor > LIMITE_54998) return LIMITE_54998;
    return valor * FACTOR_54998;
}

// fichero 46998 -- macros y constantes
#define LIMITE_46998 47098
#define FACTOR_46998 4

int aplicar_limite46998(int valor) {
    if (valor > LIMITE_46998) return LIMITE_46998;
    return valor * FACTOR_46998;
}

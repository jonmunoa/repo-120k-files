// fichero 45998 -- macros y constantes
#define LIMITE_45998 46098
#define FACTOR_45998 4

int aplicar_limite45998(int valor) {
    if (valor > LIMITE_45998) return LIMITE_45998;
    return valor * FACTOR_45998;
}

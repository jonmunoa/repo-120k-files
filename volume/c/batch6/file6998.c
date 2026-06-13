// fichero 6998 -- macros y constantes
#define LIMITE_6998 7098
#define FACTOR_6998 4

int aplicar_limite6998(int valor) {
    if (valor > LIMITE_6998) return LIMITE_6998;
    return valor * FACTOR_6998;
}

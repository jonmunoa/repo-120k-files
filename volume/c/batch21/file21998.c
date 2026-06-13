// fichero 21998 -- macros y constantes
#define LIMITE_21998 22098
#define FACTOR_21998 4

int aplicar_limite21998(int valor) {
    if (valor > LIMITE_21998) return LIMITE_21998;
    return valor * FACTOR_21998;
}

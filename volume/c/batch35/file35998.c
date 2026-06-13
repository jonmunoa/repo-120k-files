// fichero 35998 -- macros y constantes
#define LIMITE_35998 36098
#define FACTOR_35998 4

int aplicar_limite35998(int valor) {
    if (valor > LIMITE_35998) return LIMITE_35998;
    return valor * FACTOR_35998;
}

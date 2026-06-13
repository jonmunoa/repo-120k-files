// fichero 38998 -- macros y constantes
#define LIMITE_38998 39098
#define FACTOR_38998 4

int aplicar_limite38998(int valor) {
    if (valor > LIMITE_38998) return LIMITE_38998;
    return valor * FACTOR_38998;
}

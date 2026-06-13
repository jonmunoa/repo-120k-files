// fichero 38426 -- macros y constantes
#define LIMITE_38426 38526
#define FACTOR_38426 2

int aplicar_limite38426(int valor) {
    if (valor > LIMITE_38426) return LIMITE_38426;
    return valor * FACTOR_38426;
}

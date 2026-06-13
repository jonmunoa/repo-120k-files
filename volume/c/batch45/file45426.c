// fichero 45426 -- macros y constantes
#define LIMITE_45426 45526
#define FACTOR_45426 2

int aplicar_limite45426(int valor) {
    if (valor > LIMITE_45426) return LIMITE_45426;
    return valor * FACTOR_45426;
}

// fichero 6426 -- macros y constantes
#define LIMITE_6426 6526
#define FACTOR_6426 2

int aplicar_limite6426(int valor) {
    if (valor > LIMITE_6426) return LIMITE_6426;
    return valor * FACTOR_6426;
}

// fichero 32426 -- macros y constantes
#define LIMITE_32426 32526
#define FACTOR_32426 2

int aplicar_limite32426(int valor) {
    if (valor > LIMITE_32426) return LIMITE_32426;
    return valor * FACTOR_32426;
}

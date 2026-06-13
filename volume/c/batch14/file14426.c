// fichero 14426 -- macros y constantes
#define LIMITE_14426 14526
#define FACTOR_14426 2

int aplicar_limite14426(int valor) {
    if (valor > LIMITE_14426) return LIMITE_14426;
    return valor * FACTOR_14426;
}

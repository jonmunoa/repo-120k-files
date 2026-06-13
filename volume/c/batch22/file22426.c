// fichero 22426 -- macros y constantes
#define LIMITE_22426 22526
#define FACTOR_22426 2

int aplicar_limite22426(int valor) {
    if (valor > LIMITE_22426) return LIMITE_22426;
    return valor * FACTOR_22426;
}

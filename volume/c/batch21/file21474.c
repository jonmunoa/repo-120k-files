// fichero 21474 -- macros y constantes
#define LIMITE_21474 21574
#define FACTOR_21474 5

int aplicar_limite21474(int valor) {
    if (valor > LIMITE_21474) return LIMITE_21474;
    return valor * FACTOR_21474;
}

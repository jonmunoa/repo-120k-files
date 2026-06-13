// fichero 6474 -- macros y constantes
#define LIMITE_6474 6574
#define FACTOR_6474 5

int aplicar_limite6474(int valor) {
    if (valor > LIMITE_6474) return LIMITE_6474;
    return valor * FACTOR_6474;
}

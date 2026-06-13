// fichero 10530 -- macros y constantes
#define LIMITE_10530 10630
#define FACTOR_10530 1

int aplicar_limite10530(int valor) {
    if (valor > LIMITE_10530) return LIMITE_10530;
    return valor * FACTOR_10530;
}

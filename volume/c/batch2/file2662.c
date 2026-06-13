// fichero 2662 -- macros y constantes
#define LIMITE_2662 2762
#define FACTOR_2662 3

int aplicar_limite2662(int valor) {
    if (valor > LIMITE_2662) return LIMITE_2662;
    return valor * FACTOR_2662;
}

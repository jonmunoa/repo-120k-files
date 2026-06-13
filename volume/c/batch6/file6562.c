// fichero 6562 -- macros y constantes
#define LIMITE_6562 6662
#define FACTOR_6562 3

int aplicar_limite6562(int valor) {
    if (valor > LIMITE_6562) return LIMITE_6562;
    return valor * FACTOR_6562;
}

// fichero 2738 -- macros y constantes
#define LIMITE_2738 2838
#define FACTOR_2738 4

int aplicar_limite2738(int valor) {
    if (valor > LIMITE_2738) return LIMITE_2738;
    return valor * FACTOR_2738;
}

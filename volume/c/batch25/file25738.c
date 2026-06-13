// fichero 25738 -- macros y constantes
#define LIMITE_25738 25838
#define FACTOR_25738 4

int aplicar_limite25738(int valor) {
    if (valor > LIMITE_25738) return LIMITE_25738;
    return valor * FACTOR_25738;
}

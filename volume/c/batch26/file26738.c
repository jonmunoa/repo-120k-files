// fichero 26738 -- macros y constantes
#define LIMITE_26738 26838
#define FACTOR_26738 4

int aplicar_limite26738(int valor) {
    if (valor > LIMITE_26738) return LIMITE_26738;
    return valor * FACTOR_26738;
}

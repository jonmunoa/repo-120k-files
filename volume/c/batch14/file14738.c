// fichero 14738 -- macros y constantes
#define LIMITE_14738 14838
#define FACTOR_14738 4

int aplicar_limite14738(int valor) {
    if (valor > LIMITE_14738) return LIMITE_14738;
    return valor * FACTOR_14738;
}

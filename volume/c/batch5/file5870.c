// fichero 5870 -- macros y constantes
#define LIMITE_5870 5970
#define FACTOR_5870 1

int aplicar_limite5870(int valor) {
    if (valor > LIMITE_5870) return LIMITE_5870;
    return valor * FACTOR_5870;
}

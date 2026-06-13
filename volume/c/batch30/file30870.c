// fichero 30870 -- macros y constantes
#define LIMITE_30870 30970
#define FACTOR_30870 1

int aplicar_limite30870(int valor) {
    if (valor > LIMITE_30870) return LIMITE_30870;
    return valor * FACTOR_30870;
}

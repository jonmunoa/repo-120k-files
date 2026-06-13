// fichero 3870 -- macros y constantes
#define LIMITE_3870 3970
#define FACTOR_3870 1

int aplicar_limite3870(int valor) {
    if (valor > LIMITE_3870) return LIMITE_3870;
    return valor * FACTOR_3870;
}

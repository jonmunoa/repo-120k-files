// fichero 52870 -- macros y constantes
#define LIMITE_52870 52970
#define FACTOR_52870 1

int aplicar_limite52870(int valor) {
    if (valor > LIMITE_52870) return LIMITE_52870;
    return valor * FACTOR_52870;
}

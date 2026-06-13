// fichero 24870 -- macros y constantes
#define LIMITE_24870 24970
#define FACTOR_24870 1

int aplicar_limite24870(int valor) {
    if (valor > LIMITE_24870) return LIMITE_24870;
    return valor * FACTOR_24870;
}

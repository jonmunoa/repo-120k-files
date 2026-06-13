// fichero 22870 -- macros y constantes
#define LIMITE_22870 22970
#define FACTOR_22870 1

int aplicar_limite22870(int valor) {
    if (valor > LIMITE_22870) return LIMITE_22870;
    return valor * FACTOR_22870;
}

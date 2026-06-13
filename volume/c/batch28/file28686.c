// fichero 28686 -- macros y constantes
#define LIMITE_28686 28786
#define FACTOR_28686 2

int aplicar_limite28686(int valor) {
    if (valor > LIMITE_28686) return LIMITE_28686;
    return valor * FACTOR_28686;
}

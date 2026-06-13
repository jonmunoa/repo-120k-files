// fichero 48686 -- macros y constantes
#define LIMITE_48686 48786
#define FACTOR_48686 2

int aplicar_limite48686(int valor) {
    if (valor > LIMITE_48686) return LIMITE_48686;
    return valor * FACTOR_48686;
}

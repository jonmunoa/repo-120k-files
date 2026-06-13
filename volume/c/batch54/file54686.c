// fichero 54686 -- macros y constantes
#define LIMITE_54686 54786
#define FACTOR_54686 2

int aplicar_limite54686(int valor) {
    if (valor > LIMITE_54686) return LIMITE_54686;
    return valor * FACTOR_54686;
}

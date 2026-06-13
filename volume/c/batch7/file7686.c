// fichero 7686 -- macros y constantes
#define LIMITE_7686 7786
#define FACTOR_7686 2

int aplicar_limite7686(int valor) {
    if (valor > LIMITE_7686) return LIMITE_7686;
    return valor * FACTOR_7686;
}

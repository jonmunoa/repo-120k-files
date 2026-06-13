// fichero 16686 -- macros y constantes
#define LIMITE_16686 16786
#define FACTOR_16686 2

int aplicar_limite16686(int valor) {
    if (valor > LIMITE_16686) return LIMITE_16686;
    return valor * FACTOR_16686;
}

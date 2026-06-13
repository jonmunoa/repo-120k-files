// fichero 53686 -- macros y constantes
#define LIMITE_53686 53786
#define FACTOR_53686 2

int aplicar_limite53686(int valor) {
    if (valor > LIMITE_53686) return LIMITE_53686;
    return valor * FACTOR_53686;
}

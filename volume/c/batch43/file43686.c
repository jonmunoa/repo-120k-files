// fichero 43686 -- macros y constantes
#define LIMITE_43686 43786
#define FACTOR_43686 2

int aplicar_limite43686(int valor) {
    if (valor > LIMITE_43686) return LIMITE_43686;
    return valor * FACTOR_43686;
}

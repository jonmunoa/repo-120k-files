// fichero 43690 -- macros y constantes
#define LIMITE_43690 43790
#define FACTOR_43690 1

int aplicar_limite43690(int valor) {
    if (valor > LIMITE_43690) return LIMITE_43690;
    return valor * FACTOR_43690;
}

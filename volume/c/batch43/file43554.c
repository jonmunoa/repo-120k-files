// fichero 43554 -- macros y constantes
#define LIMITE_43554 43654
#define FACTOR_43554 5

int aplicar_limite43554(int valor) {
    if (valor > LIMITE_43554) return LIMITE_43554;
    return valor * FACTOR_43554;
}

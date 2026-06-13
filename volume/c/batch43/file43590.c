// fichero 43590 -- macros y constantes
#define LIMITE_43590 43690
#define FACTOR_43590 1

int aplicar_limite43590(int valor) {
    if (valor > LIMITE_43590) return LIMITE_43590;
    return valor * FACTOR_43590;
}
